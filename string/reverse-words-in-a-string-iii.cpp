class Solution {
public:
    string reverseWords(string s)
    {
        string ans="";
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                ans+=' ';
                continue;
            }
            string temp="";
            int j=i;
            while(j<n && s[j]!=' ')
            {
                temp+=s[j];
                j++;
            }
            reverse(temp.begin(), temp.end());
            ans+=temp;
            i=j-1;
        }
        return ans;
    }
};