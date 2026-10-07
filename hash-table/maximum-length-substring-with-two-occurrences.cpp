class Solution {
public:
    int maximumLengthSubstring(string s) 
    {
        int len=0;
        unordered_map<char, int>mpp;
        int l = 0;
        for(int r=0;r<s.length();r++)
        {
            mpp[s[r]]++;
            while(mpp[s[r]]>2)
            {
                mpp[s[l]]--;
                l++;
            }
            len = max(len,r-l+1);
        }
        return len;
    }
};