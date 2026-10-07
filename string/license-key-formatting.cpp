class Solution {
public:
    string licenseKeyFormatting(string s, int k)
    {
        int n=0;
        string s1="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='-')
            {
                n++;
                s1+=toupper(s[i]);
            }
        }
        string ans ="";
        reverse(s1.begin(),s1.end());
        for(int i=0;i<s1.size();i++)
        {
            if(i!=0 && i%k==0)ans+="-";
            ans+=s1[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};