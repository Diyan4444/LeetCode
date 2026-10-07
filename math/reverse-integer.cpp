class Solution 
{
public:
    int reverse(int x) 
    {
        // 1. Cast x to long long INSIDE abs() to prevent the negation crash
        long long og = abs((long long)x); 
        int len = 0;
        while (og > 0)
        {
            og = og / 10;
            len++;
        }
        
        int rem = 0;
        int q = 0;
        // 2. Cast x to long long here as well
        long long num = abs((long long)x); 
        long long rev = 0; // Changed to long long for safety
        
        for(int i = 0; i < len; i++)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        
        if(x < 0)
        {
            rev = rev * -1;
        }
        
        if (rev < INT_MIN || rev > INT_MAX) 
        {
            return 0;
        }
        return rev;
    }
};