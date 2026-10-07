class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        int n=nums.size();
        int first = 0;
        int second = 0;
        int result = -1;
        int index = 0;
        for(int i = 0; i<n; i++)
        {
            if(nums[i]>first)
            {
                second = first;
                first = nums[i];
                index = i;
            }
            else if(nums[i]>second)
            {
                second = nums[i];
            }
        }
        if(first>=2*second)
        {
            result = index;
        }
        return result;
    }
};