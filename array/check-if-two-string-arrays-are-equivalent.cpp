class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string c1="",c2="";
        for(string s:word1)c1+=s;
        for(string s:word2)c2+=s;
        return c1==c2;
    }
};