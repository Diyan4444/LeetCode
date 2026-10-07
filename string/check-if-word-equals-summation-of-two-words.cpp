class Solution {
public:
    int check(string s)
    {
        int val=0;
        for(char ch: s)
        {
            val=(10*val) + (ch-'a');
        }
        return val;
    }
    bool isSumEqual(string f, string s, string t) 
    {
        return check(s)+check(f)==check(t);
    }
};