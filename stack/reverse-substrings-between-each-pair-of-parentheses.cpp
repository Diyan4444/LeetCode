class Solution {
public:
    string reverseParentheses(string s)
    {
        int n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]==')')
            {
                string ans ="";
                while(!st.empty() && st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }
                if(!st.empty())
                {
                    st.pop();
                }
                int si = ans.length();
                int k = 0;
                while(k < si)
                {
                    st.push(ans[k]);
                    k++;
                }
            }
            else st.push(s[i]);
        }
        string ans = "";
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};