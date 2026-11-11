class Solution {
public:
    int minimumRecolors(string s, int k) 
    {
        int n = s.length();
        int ans=n;
        for(int i=0;i<=n-k;i++)
        {
            int temp=0;
            for(int j=i;j<k+i;j++)
            {
                if(s[j]=='W')temp++;
            }
            ans = min(ans,temp);
        }
        return ans;
    }
};