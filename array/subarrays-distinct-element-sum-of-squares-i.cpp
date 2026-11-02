class Solution {
public:
    int sumCounts(vector<int>& nums) 
    {
        int n = nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            unordered_set<int> s;
            s.insert(nums[i]);
            ans+= s.size()*s.size();
            for(int j=i+1;j<n;j++)
            {
                s.insert(nums[j]);
                ans+= s.size()*s.size();
            }
        }
        return ans;
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