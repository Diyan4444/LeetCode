class Solution {
public:
    string removeDuplicates(string s) 
    {
        int n = s.length();
        int i=0;
        while(i<n)
        {
            if (i > 0 && s[i] == s[i - 1]) 
            {
                s.erase(i - 1, 2);
                i--;
            }
            else
            {
                i++;
            }
        }
        return s;
    }
};