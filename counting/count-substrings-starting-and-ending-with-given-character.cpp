class Solution {
public:
    long long countSubstrings(string s, char c){
        long long x = 0;
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]==c)
            {
                x++;
            }
        }
        return x*(x+1)/2;
    }
};