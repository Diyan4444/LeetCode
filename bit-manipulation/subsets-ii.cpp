class Solution {
public:
    void backtrack(vector<vector<int>>& res, vector<int>& ans, vector<int>& nums, int i)
    {
        res.push_back(ans);
        for(int j=i;j<nums.size();j++)
        {
            if(j>i && nums[j]==nums[j-1])continue;
            ans.push_back(nums[j]);
            backtrack(res,ans,nums,j+1);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> ans;
        backtrack(res,ans,nums,0);
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