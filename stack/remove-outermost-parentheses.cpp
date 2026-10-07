class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        int n = s.length();
        int o=0;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                if(o>0)ans+=s[i];
                o++;
            }
            if(s[i]==')')
            {
                o--;
                if(o>0)ans+=s[i];
            }
        }
        return ans;
    }
};