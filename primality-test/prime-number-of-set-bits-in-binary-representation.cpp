class Solution {
public:
    int countPrimeSetBits(int left, int right)
    {
        unordered_set<int> temp = {2,3,5,7,11,13,17,19};
        int x = 0;
        for(int i=left;i<=right;i++)
        {
            if(temp.count(__builtin_popcount(i)))
            {
                x++;
            }
        }
        return x;
    }
};