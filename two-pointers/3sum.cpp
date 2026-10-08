class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int n = nums.size();
        if(n<3){return {};}
        if(n==3)
        {
            if(nums[0]+nums[1]+nums[2]==0)
            {
                return {{nums[0],nums[1],nums[2]}};
            }
            else{return{};}
        }
        sort(nums.begin(),nums.end());
        vector<vector<int>> temp;
        for(int i=0;i<n-2;i++)
        {
            if(nums[i]>0){break;}
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int left = i+1;
            int right = n-1;
            while (left < right) 
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) 
                {
                    temp.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } 
                else if (sum < 0) 
                {
                    left++;
                } 
                else 
                {
                    right--;
                }
            }
        }
        return temp;
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
