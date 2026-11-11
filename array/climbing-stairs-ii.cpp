class Solution {
public:
    int climbStairs(int n, vector<int>& costs) 
    {
        vector<int> dp(n+1,0);
        dp[0]=0;
        for(int j=1;j<=n;j++)
        {
            int best = dp[j-1]+ 1;
            if(j>=2)best = min(best, dp[j-2] + 4);
            if(j>=3)best = min(best, dp[j-3]+9);
            dp[j]=costs[j-1] + best;
        }
        return dp[n];
    }
};