class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {        
        int n=nums.size();
        vector<bool> temp(n,false);
        for(int i:nums)
        {
            if(i>0 && i<=n)
            {
                temp[i-1]=true;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!temp[i])
            {
                return i+1;
            }
        }
        return n+1;
    }
};
