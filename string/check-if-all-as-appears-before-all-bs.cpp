class Solution {
public:
    bool checkString(string s) 
    {
        int n = s.length();
        int temp=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='b')
            {
                temp = i;
                break;
            }
        }
        if(temp!=-1)
        {
            for(int i=temp;i<n;i++)
            {
                if(s[i]=='a')return false;
            }
        }
        return true;
    }
};