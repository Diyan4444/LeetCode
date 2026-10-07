class Solution {
public:
    string reverseVowels(string s) 
    {
        vector<int> index;
        vector<char>v;
        for(int i =0;i<s.length();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                v.push_back(s[i]);
                index.push_back(i);
            }
        }
        reverse(v.begin(),v.end());
        for(int i = 0;i<index.size();i++)
        {
            s[index[i]] = v[i];
        }
        return s;
    }
};