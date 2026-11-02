class Solution {
public:
    int minSwaps(vector<int>& nums) 
    {
        int n = nums.size();
        int swaps=0;
        vector<pair<pair<int,int>,int>> ans;
        for(int i=0;i<n;i++) ans.push_back({{sum(nums[i]), nums[i]}, i});
        sort(ans.begin(),ans.end());
        vector<int> visi(n,0);
        for(int i=0;i<n;i++)
        {
            if(visi[i] || ans[i].second==i) continue;
            int temp = 0;
            int j = i;
            while (!visi[j]) 
            {
                visi[j] = 1;
                j = ans[j].second;
                temp++;
            }
            swaps += temp - 1;
        }
        return swaps;
    }
    int sum(int x)
    {
        int ans=0;
        while(x>0)
        {
            ans +=  x%10;
            x=x/10;
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