class Solution {
public:
    int findShortestSubArray(vector<int>& nums) 
    {
        map<int,int> mpp;
        for(int i: nums)
        {
            mpp[i]++;
        }
        int m = INT_MIN;
        for(auto [val,count] : mpp)
        {
            m = max(m,count);
        }
        int ans = nums.size();
        for(auto [val,count] : mpp)
        {
            if(count==m)
            {
                int l=0,r=nums.size()-1;
                while(nums[l]!=val)l++;
                while(nums[r]!=val)r--;
                ans = min(ans,r-l+1);
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
