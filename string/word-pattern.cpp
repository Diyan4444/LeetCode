class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss>>word)
        {
            words.push_back(word);
        }
        if (pattern.length() != words.size()) return false;
        unordered_map<char,string> mpp;
        unordered_map<string, char> mpp2;
        for (int i = 0; i < pattern.length(); i++)
        {
            if (mpp.count(pattern[i]) && mpp[pattern[i]] != words[i]) return false;
            if (mpp2.count(words[i]) && mpp2[words[i]] != pattern[i]) return false;
            mpp[pattern[i]] = words[i];
            mpp2[words[i]] = pattern[i];
        }
        return true;
    }
};