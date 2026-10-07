class Solution {
public:
    string convertToBase7(int num) 
    {
        if(num==0)
        {
            return "0";
        }
        int sign=1;
        if(num<0)
        {
            sign = -1;
        }
        num = abs(num);
        int remainder = 0;
        int ans = 0;
        string res="";
        while(num!=0)
        {
            res += to_string(num%7);
            num=num/7;
        }
        if(sign==-1)
        {
            res+='-';
        }
        reverse(res.begin(),res.end());
        return res;
    }
};