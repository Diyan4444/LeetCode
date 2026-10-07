class Solution {
public:
    void check(int left, int right, string& s, int& start, int& max_len) 
    {
        while (left >= 0 && right < s.length() && s[left] == s[right]) 
        {
            left--;
            right++;
        }
        int len = right - left - 1;
        if (len > max_len) 
        {
            max_len = len;
            start = left + 1;
        }
    }
    string longestPalindrome(string s) 
    {
        if (s.length() <= 1) return s;
        int start = 0;
        int max_len = 0;
        for (int i = 0; i < s.length(); i++) 
        {
            check(i, i, s, start, max_len);
            check(i, i + 1, s, start, max_len);
        }
        return s.substr(start, max_len);
    }
};