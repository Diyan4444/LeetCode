class Solution {
public:
    string reverseOnlyLetters(string s) 
    {
        vector<int> temp;
        vector<char> sign;
        unordered_set<char> letters;
        string ans ="";
        for(int ch='a';ch<='z';ch++)letters.insert(ch);
        for(int ch='A';ch<='Z';ch++)letters.insert(ch);
        for(int i=0;i<s.length();i++)
        {
            if(letters.find(s[i])==letters.end())
            {
                temp.push_back(i);
                sign.push_back(s[i]);
            }
            else ans+=s[i];
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<temp.size();i++)
        {
            ans.insert(temp[i],1,sign[i]);
        }
        return ans;
    }
};