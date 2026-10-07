class Solution {
public:
    string reverseWords(string s) 
    {
        int n = s.length();
        string ans = "";
        string temp = "";
        for (int i = 0; i < n; i++) 
        {
            if (s[i] != ' ') 
            {
                temp += s[i];
            }
            if ((s[i] == ' ' || i == n - 1) && !temp.empty()) 
            {
                if (ans.empty()) 
                {
                    ans = temp;
                } else 
                {
                    ans = temp + " " + ans;
                }
                temp = "";
            }
        }
        return ans;
    }
};