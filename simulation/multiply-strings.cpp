class Solution {
public:
    string multiply(string num1, string num2) 
    {
        int n = num1.length();
        int m = num2.length();
        vector<int> ans(m+n,0);
        for(int i=n-1;i>=0;i--)
        {
            for(int j = m-1;j>=0;j--)
            {
                int sum = ((num1[i]-'0')*(num2[j]-'0')) + ans[i+j+1];
                ans[i+j+1]=sum%10;
                ans[i+j]+=sum/10;
            }
        }
        string res = "";
        for (int i : ans) 
        {
            if (!(res.empty() && i == 0)) 
            {
                res.push_back(i + '0');
            }
        }
        return res.empty()?"0":res;
    }
};