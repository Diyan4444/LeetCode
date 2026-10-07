class Solution {
public:
    int bitwiseComplement(int n) 
    {
        if(n==0) return 1;
        int og = n;
        int length = 0;
        while (og>0)
        {
            og=og/2;
            length++;
        }
        int exp = pow(2,length)-1;
        int result = exp - n;
        return abs(result);
    }
};