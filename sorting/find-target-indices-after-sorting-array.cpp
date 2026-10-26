class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int l=0;
        int n = nums.size();
        while(l<n)
        {
            if(nums[l]==target)break;
            l++;
        }
        while(l<n)
        {
            if(nums[l]==target)ans.push_back(l);
            else break;
            l++;
        }
        return ans;
    }
};