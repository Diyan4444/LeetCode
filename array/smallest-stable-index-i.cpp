class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k)
    {
        int n = nums.size();
        if(n==0)return 0;
        int mi;
        int ma;
        for(int i=0;i<n;i++)
        {
            ma=nums[0];
            for(int j=0;j<=i;j++)
            {
                ma = max(ma,nums[j]);
            }
            mi = nums[i];
            for(int j=i;j<n;j++)
            {
                mi = min(mi,nums[j]);
            }
            if(ma-mi<=k)return i;
        }
        return -1;
    }
};