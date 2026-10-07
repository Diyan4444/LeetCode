class Solution {
public:
    bool checkOnesSegment(string s) 
    {
        int con = 0;
        for(int i =0;i<s.length()-1;i++)
        {
            if(s[i]=='0' && s[i+1] =='1')
            {
                con++;
            }
            else if(s[i]=='1' && s[i+1]=='0')
            {
                con++;
            }
        }
        if(con>1)
        {
            return false;
        }    
        else
            return true;
    }
};