class Solution {
public:
    int trailingZeroes(int n) 
    {
        int z=0;
        while(n>=5)
        {
            z+=n/5;
            n=n/5;
        }
        return z;
    }
};