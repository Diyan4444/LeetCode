class Solution {
public:
    char hex(int x)
    {
        if(x==0)return '0';
        if(x==1)return '1';
        if(x==2)return '2';
        if(x==3)return '3';
        if(x==4)return '4';
        if(x==5)return '5';
        if(x==6)return '6';
        if(x==7)return '7';
        if(x==8)return '8';
        if(x==9)return '9';
        if(x==10)return 'a';
        if(x==11)return 'b';
        if(x==12)return 'c';
        if(x==13)return 'd';
        if(x==14)return 'e';
        return 'f';
    }
    string toHex(int num)
    {
        if(num==0)return "0";
        long long x;
        if(num<0)
        {
            x = 4294967296 + num;
        }
        else{x=num;}
        string ans= "";
        while(x>0)
        {
            ans += hex(x%16);
            x=x/16;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};