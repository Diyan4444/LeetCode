class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits)
    {
        int n = bits.size();
        if(bits[n-1]!=0)return false;
        int i=0;
        while(i<n-1)
        {
            if(bits[i]==1)
            {
                i=i+2;
            }
            else
            {
                i++;
            }
        }
        return i==n-1;
    }
};