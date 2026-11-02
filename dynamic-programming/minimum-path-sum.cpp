class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        int n =grid[0].size();
        vector<int>dp(m,grid[0][0]);
        for(int i=1;i<m;i++) dp[i]=dp[i-1]+grid[i][0];
        for(int j=1;j<n;j++)
        {
            dp[0]+=grid[0][j];
            for(int i=1;i<m;i++)
            {
                dp[i]=min(dp[i-1],dp[i]) + grid[i][j];
            }
        }
        return dp[m-1];
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
