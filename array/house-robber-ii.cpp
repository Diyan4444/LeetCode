class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        if(n==3) return max(nums[0],max(nums[1],nums[2]));
        vector<int> dp(n,0);
        dp[0]=nums[0];
        dp[1]=max(dp[0],nums[1]);
        for(int i=2;i<n-1;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        int f=dp[n-2];
        dp[1]=nums[1];
        dp[2]=max(dp[1],nums[2]);
        for(int i=3;i<n;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        int s=dp[n-1];
        return max(f,s);
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
