class Solution {
public:
    int distinctSubseqII(string s)
    {
        long long int mod = 1000000007;
        long long dp = 1;
        vector<long long> last(26,0);
        for(char ch : s)
        {
            int i = ch - 'a';
            long long oldDp = dp;
            dp = (2*dp - last[i] + mod)%mod;
            last[i] = oldDp;
        }
        return (dp-1+mod)%mod;
    }
};