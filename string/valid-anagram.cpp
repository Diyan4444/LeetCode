class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        bool result = false;
        map<char,int>mpp1;
        map<char,int>mpp2;
        for(char ch : s)
        {
            mpp1[ch]++;
        }
        for(char ch : t)
        {
            mpp2[ch]++;
        }
        result = (mpp1 == mpp2);
        return result;
    }
};