class Solution {
public:
    int mySqrt(int x)
    {
        if (x < 2) return x;
        long long result = 1;
        for (long long i = 1; i * i <= x; i++)
        {
            result = i;
        }
        return result;
    }
};