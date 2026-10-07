class Solution {
public:
    char repeatedCharacter(string s)
    {
        unordered_set<char> h;
        for(char ch : s)
        {
            if(!h.insert(ch).second)
            {
                return ch;
            }
        }
        return ' ';
    }
};