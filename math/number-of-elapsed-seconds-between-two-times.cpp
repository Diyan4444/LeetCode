class Solution {
public:
    int backtrack(string& s)
    {
        int hr = stoi(s.substr(0,2));
        int m = stoi(s.substr(3,2));
        int ss = stoi(s.substr(6,2));
        return 3600*hr + 60*m + ss;
    }
    int secondsBetweenTimes(string s, string t)
    {
        int i = backtrack(s);
        int j = backtrack(t);
        if(j>=i)return j-i;
        return 86400-i+j;
    }
};