class Solution {
public:
    double myPow(double x, int n)
    {
        long N = n;
        long double result = 0; 
        if(N>0)
        {
            result = pow(x,N);
        }
        else if(N<0)
        {
            result = pow(x,N);
        }
        else
        {
            result = 1;
        }
        return result;
    }
};