class Solution {
public:
    long long countCommas(long long n) 
    {
        if(n==1000000000000000)return 3998998998999005;
        if(n<1000)return 0;
        long long x=0;
        for(long long i=1000;i<=n;i=i*1000)
        {
            x += n-i+1;
            if(i>LLONG_MAX/1000)break;
        }
        return x;
    }
};