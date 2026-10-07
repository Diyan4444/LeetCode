class Solution {
public:
    int maxDepth(string s)
    {
        int sum=0;
        int ans=0;
        for(char ch : s)
        {
            if(ch=='(')sum++;
            if(ch==')')sum--;
            ans=max(ans,sum);
        }
        return ans;
    }
};