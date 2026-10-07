class Solution {
public:
    int longestPalindrome(string s) 
    {
        int sum = 0;
        int flag = 0;
        map<char,int>mpp;
        for(char ch : s)
        {
            mpp[ch]++;
        }
        for(auto [val,count] : mpp)
        {
            if(count%2==0)
            {
                sum+=count;
            }
            else
            {
                sum+=count-1;
            }
            if(count%2==1)
            {
                flag=1;
            }
        }
        return sum+flag;
    }
};