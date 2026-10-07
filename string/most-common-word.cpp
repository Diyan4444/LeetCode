class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) 
    {
        for(char &ch : paragraph)
        {
            if(isalpha(ch))
            {
                ch=tolower(ch);
            }
            else{ch=' ';}
        }
        unordered_map<string,int>mpp;
        stringstream s1(paragraph);
        string s;
        while(s1>>s)
        {
            mpp[s]++;
        }
        string result;
        int max=0;
        unordered_set<string> ban(banned.begin(),banned.end());
        for(auto& [temp,count] : mpp)
        {
            if(!ban.count(temp)&&max<count)
            {
                max = count;
                result = temp;
            }
        }
        return result;
    }
};