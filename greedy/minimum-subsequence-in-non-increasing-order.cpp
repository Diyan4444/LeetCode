class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) 
    {
        vector<int> ans;
        int tot = 0;
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int& i: nums)tot+=i;
        for(int i=nums.size()-1;i>=0;i--)
        {
            sum+=nums[i];
            ans.push_back(nums[i]);
            if(sum>tot/2)return ans;
        }
        return ans;
    }
};