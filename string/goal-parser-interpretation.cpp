class Solution {
public:
    string interpret(string s) 
    {
        vector<char> st;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='G')st.push_back('G');
            else if(s[i]==')')
            {
                if(i>0 && s[i-1]=='(')
                {
                    st.pop_back();
                    st.push_back('o');
                }
                else if (i>0 && s[i-1]=='l')
                {
                    st.pop_back();
                    st.pop_back();
                    st.pop_back();
                    st.push_back('a');
                    st.push_back('l');
                }
            }
            else st.push_back(s[i]);
        }
        string ans ="";
        for(char ch:st)
        {
            ans+=ch;
        }
        // reverse(ans.begin(),ans.end());
        return ans;
    }
};