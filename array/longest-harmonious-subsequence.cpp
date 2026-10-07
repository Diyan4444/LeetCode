class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int x=0, m=0;
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]-nums[x]>1)x++;
            if(nums[i]-nums[x]==1)m=max(m,i-x+1);
        }
        return m;
    }
};