class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int>ans(n);
        int sum=1;
        int z=0;
        int q=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)z++;
            if(nums[i]!=0)q*=nums[i];
            sum*=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0 && z>1)ans[i]=0;
            else if(nums[i]==0 && z==1)ans[i]=q;
            else ans[i]=(sum/nums[i]);
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