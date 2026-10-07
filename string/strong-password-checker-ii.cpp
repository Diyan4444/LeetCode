class Solution {
public:
    bool strongPasswordCheckerII(string p)
    {
        bool len = false;
        bool lower = false;
        bool upper = false;
        bool digit = false;
        bool special = false;
        bool adj = true;
        unordered_set<char> x = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+'};
        int n = p.length();
        if(n>7)len=true;
        for(char ch : p)
        {
            if(isupper(static_cast<unsigned char>(ch)))
            {
                upper = true;
            }
            else if(islower(static_cast<unsigned char>(ch)))
            {
                lower = true;
            }
            else if(isdigit(static_cast<unsigned char>(ch)))
            {
                digit = true;
            }
            else if(x.contains(ch))
            {
                special = true;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(p[i]==p[i+1])
            {
                adj=false;
            }
        }
        return len && digit && upper && lower && special && adj;
    }
};