class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int mul = k;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]==mul)
            {
                mul = mul+k;
            }
        }
        return mul;
    }
};