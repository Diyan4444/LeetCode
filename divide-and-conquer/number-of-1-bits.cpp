class Solution {
public:
    int hammingWeight(int n) 
    {
        bitset<32> bits(n);
        int count = 0;
        for(int i =0;i<32;i++)
        {
            if(bits[i]==1)
            {
                count++;
            }
        }
        return count;
    }
};