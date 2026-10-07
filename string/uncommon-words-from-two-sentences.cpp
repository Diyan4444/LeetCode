class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) 
    {
        unordered_map<string,int>mpp;
        stringstream s(s1);
        string temp;
        while(s>>temp)
        {
            mpp[temp]++;
        }
        stringstream s3(s2);
        string temp1;
        while(s3>>temp1)
        {
            mpp[temp1]++;
        }
        vector<string>result;
        for(auto& [word,count] : mpp)
        {
            if(count==1)
            {
                result.push_back(word);
            }
        }
        return result;
    }
};