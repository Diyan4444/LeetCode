class Solution {
public:
    vector<vector<int>>res;
    void backtrack(vector<int>& nums, vector<int>& ans, vector<bool>& u)
    {
        if(ans.size()==nums.size())
        {
            res.push_back(ans);
            return;
        }
        for(int i = 0;i<nums.size();i++)
        {
            if(u[i]==true)continue;
            u[i]=true;
            ans.push_back(nums[i]);
            backtrack(nums,ans,u);
            u[i]=false;
            ans.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<int> ans;
        vector<bool> u(nums.size(),false);
        backtrack(nums,ans,u);
        return res;
    }
};
#pragma GCC optimize("Ofast")


#include <iostream>


static constexpr std::size_t max_align = alignof(std::max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static std::size_t pos = 0;


void *operator new(const std::size_t size) {
    const std::size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}


void *operator new[](const std::size_t size) {
    return operator new(size);
}


void operator delete(void *) noexcept {}


void operator delete[](void *) noexcept {}


void operator delete(void *, std::size_t) noexcept {}


void operator delete[](void *, std::size_t) noexcept {}
