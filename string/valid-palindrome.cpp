class Solution {
public:
    bool isPalindrome(string s) 
    {
        string x="";
        for(char c : s)
        {
            if(isalnum(static_cast<unsigned char>(c)))
            {
                char lower_c = tolower(static_cast<unsigned char>(c));
                x+=lower_c;
            }
        }
        string rev = x;
        reverse(rev.begin(),rev.end());
        bool cond = false;
        if(x==rev)
        {
            cond = true;
        }
        return cond;
    }
};