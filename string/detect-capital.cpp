class Solution {
public:
    bool detectCapitalUse(string word)
    {
        int cap = 0;
        for(char ch : word)
        {
            if(isupper(static_cast<unsigned char>(ch)))
            {
                cap++;
            }
        }
        return (cap==word.length() || cap == 0 || (cap == 1 && word[0] >= 'A' && word[0] <= 'Z'));
    }
};