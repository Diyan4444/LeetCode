class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        int max = nums[n-1]*nums[n-2]*nums[n-3];
        int min = nums[n-1]*nums[0]*nums[1];
        int result = max;
        if(min>max)
        {
            result = min;
        }
        return result;
    }
};