class Solution {
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> st;
        for(char ch : s)
        {
            if(ch!='#')
            {
                st.push(ch);
            }
            else if(ch=='#' && !st.empty())
            {
                st.pop();
            }
        }
        stack<char> st1;
        for(char ch : t)
        {
            if(ch!='#')
            {
                st1.push(ch);
            }
            else if(ch=='#' && !st1.empty())
            {
                st1.pop();
            }
        }
        string s1 ="";
        string t1="";
        while(!st.empty())
        {
            s1+=st.top();
            st.pop();
        }
        while(!st1.empty())
        {
            t1+=st1.top();
            st1.pop();
        }
        return s1==t1;
    }
};