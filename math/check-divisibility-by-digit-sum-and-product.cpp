class Solution {
public:
    bool checkDivisibility(int n) 
    {
        int sum = 0;
        int product = 0;
        int temp = n;
        int og=n;
        int result = 0;
        int result_product=1;
        while(n>0)
        {
            int te = n%10;
            result += te;
            result_product *= te;
            n=n/10;
        }
        int ans = result+result_product;
        if(og%ans==0)
        {
            return true;
        }
        else{return false;}
    }
};