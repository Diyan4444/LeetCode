class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> res;
        vector<int> subset;

        backtrack(nums, 0, res, subset);
        return res;        
    }
    void backtrack(vector<int>& nums, int index, vector<vector<int>>& res, vector<int>& subset) 
    {
        if (index == nums.size())
        {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        backtrack(nums, index + 1, res, subset);
        subset.pop_back();
        backtrack(nums, index + 1, res, subset);
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
