class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int n = word1.length();
        int m = word2.length();
        string ans(n+m,' ');
        int j=0;
        for(int i=0;i<max(n,m);i++)
        {
            if(i<n)ans[j++]=word1[i];
            if(i<m)ans[j++]=word2[i];
        }
        return ans;
    }
};