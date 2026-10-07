class Solution {
public:
    string convert(string s, int x) 
    {
        string ans="";
        int n = s.length();
        int c = 2*x-2;
        if (x <= 1 || x >= n) return s;
        for(int i=0;i<x;i++)
        {
            for(int j=i;j<n;j+=c)
            {
                ans+=s[j];

                int d = j+c-2*i;
                if (i > 0 && i < x - 1 && d < n) 
                {
                    ans += s[d];
                }
            }
        }
        return ans;
    }
};