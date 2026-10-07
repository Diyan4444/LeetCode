class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) 
    {
        int n = patterns.size();
        int len = word.length();
        int count = 0;
        unordered_map<string,int> mpp;
        for(string &i : patterns)
        {
            mpp[i]++;
        }
        for (auto& [curr, freq] : mpp) 
        {
            if (word.find(curr) != string::npos) 
            {
                count += freq;
            }
        }
        return count;
    }
};