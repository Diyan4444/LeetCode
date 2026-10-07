class Solution {
public:
    bool isNumber(string s) {
        unordered_set<char> letters;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            letters.insert(ch);
        }
        unordered_set<char> nums;
        for (char ch = '0'; ch <= '9'; ch++) {
            nums.insert(ch);
        }
        int n = s.length();
        bool num = false;
        bool dot = false;
        bool exp = false;

        for (int i = 0; i < n; i++) 
        {
            if (nums.count(s[i])) 
            {
                num = true;
            } 
            else if (s[i] == '+' || s[i] == '-') 
            {
                if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E') return false;
            } 
            else if (s[i] == '.') 
            {
                if (dot || exp) return false;
                dot = true;
            } 
            else if (s[i] == 'e' || s[i] == 'E') 
            {
                if (exp || !num) return false;
                exp = true;
                num = false;
            } 
            else 
            {
                return false;
            }
        }
        return num;
    }
};