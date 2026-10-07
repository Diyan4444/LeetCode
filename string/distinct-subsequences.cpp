class Solution {
public:
    int numDistinct(string s, string t)
    {
        int m = t.size();
        vector<unsigned long long> ans(m+1,0);
        ans[0]=1;
        for(char ch : s)
        {
            for(int j=m;j>=1;j--)
            {
                if(ch==t[j-1])
                {
                    ans[j] += ans[j-1];
                }
            }
        }
        return (int)ans[m];
    }
};