class Solution {
public:
    int myAtoi(string s) 
    {
        int start = 0;
        int n = s.length();
        while (start < n && s[start] == ' ') 
        {
            start++;
        }
        if (start == n) return 0;
        int sign = 1;
        if (s[start] == '+' || s[start] == '-') 
        {
            sign = (s[start] == '-') ? -1 : 1;
            start++;
        }
        int ans = 0;
        while (start < n && s[start] >= '0' && s[start] <= '9') 
        {
            int digit = s[start] - '0';
            if (ans > (INT_MAX - digit) / 10) 
            {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            ans = ans * 10 + digit;
            start++;
        }
        return sign * ans;
    }
};