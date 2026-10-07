class Solution {
public:
    bool checkValidString(string s)
    {
        stack<int> st;
        stack<int> as;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(') 
            {
                st.push(i);
            } 
            else if (s[i] == '*')
            {
                as.push(i);
            }
            else
            {
                if (!st.empty())
                {
                    st.pop();
                }
                else if (!as.empty())
                {
                    as.pop();
                } 
                else
                {
                    return false;
                }
            }
        }
        while (!st.empty() && !as.empty())
        {
            if (st.top() > as.top())
            {
                return false;
            }
            st.pop();
            as.pop();
        }
        return st.empty();
    }
};