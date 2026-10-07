class Solution {
public:
    bool checkRecord(string s)
    {
        int ab = count(s.begin(),s.end(),'A');
        if(ab>=2)return false;
        if(s.find("LLL") != std::string::npos)return false;
        return true;
    }
};