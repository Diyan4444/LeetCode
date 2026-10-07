class Solution {
public:
    int longestSubarray(vector<int>& nums)
    {
        int n = nums.size();
        int x=2;
        int ans = 2;
        for(int i=2;i<n;i++)
        {
            if(nums[i]==nums[i-1]+nums[i-2])
            {
                x++;
            }
            else
            {
                x=2;
            }
            ans = max(ans,x);
        }
        return ans;
    }
};