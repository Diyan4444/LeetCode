class Solution {
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.length();
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                string s1 = s.substr(0,i);
                string res ="";
                for(int j = 0;j<n/i;j++)
                {
                    res+=s1;
                }
                if(res == s)return true;
            }
        }
        return false;
    }
};