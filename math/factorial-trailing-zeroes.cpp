class Solution {
public:
    int trailingZeroes(int n) 
    {
        if(n<5)return 0;
        int z=0;
        while(n>=5)
        {
            z+=n/5;
            n=n/5;
        }
        return z;
    }
};