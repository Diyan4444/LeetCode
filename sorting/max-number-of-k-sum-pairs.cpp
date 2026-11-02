class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int ans=0;
        sort(nums.begin(),nums.end());
        while(l<r)
        {
            if(nums[l]+nums[r]==k)
            {
                ans++;
                l++;
                r--;
            }
            else if(nums[l]+nums[r]<k)l++;
            else if(nums[l]+nums[r]>k)r--;
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