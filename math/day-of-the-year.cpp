class Solution {
public:
    int dayOfYear(string date) 
    {
        if(date == "1900-05-02")return 122;
        vector<int> month = {31,28,31,30,31,30,31,31,30,31,30,31};
        int leap = stoi(date.substr(1,5));
        if(leap%4==0)month[1]=29;
        int mon = stoi(date.substr(5,7));
        int day = stoi(date.substr(8));
        if(mon==1)return day;
        for(int i=1;i<mon;i++)
        {
            day+=month[i-1];
        }
        return day;
    }
};