class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n==1){return 0;}
        int sum=0;
        if(nums[n-1]-k < nums[0]+k)
        {
            return 0;
        }
        else
        {
            sum = (nums[n-1]-nums[0]-(2*k));
        }
        return sum;
    }
};