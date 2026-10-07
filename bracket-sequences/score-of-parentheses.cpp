class Solution {
public:
    int scoreOfParentheses(string s) 
    {
        stack<int> st;
        st.push(0);
        for(char c:s)
        {
            if(c=='(')
            {
                st.push(0);
            }
            else
            {
                int a=st.top();
                st.pop();
                int ans=max(1,2*a);
                st.top()+=ans;
            }
        }
        return st.top();
    }
};