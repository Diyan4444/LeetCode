class Solution {
public:
    vector<string> dp;
    void c(int n,int open, int close, string s)
    {
        if(open+close==2*n)
        {
            dp.push_back(s);
            return;
        }
        if(open<n)
        {
            c(n,open+1,close,s+'(');
        }
        if(close<open)
        {
            c(n,open,close+1,s+')');
        }
    }
    vector<string> generateParenthesis(int n)
    {
        c(n,0,0,"");
        return dp;
    }
};