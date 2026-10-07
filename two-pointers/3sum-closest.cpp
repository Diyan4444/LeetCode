class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        int n = nums.size();
        if(n==3)return nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        int m = nums[0]+nums[1]+nums[2];
        for(int i=0;i<n;i++)
        {
            int left = i+1;
            int right = n-1;
            while(left<right)
            {
                int mid = nums[i]+nums[left]+nums[right];
                if (abs(mid - target) < abs(m - target))
                {
                    m = mid;
                }
                if (mid < target) 
                {
                    left++;
                } 
                else if (mid > target) 
                {
                    right--;
                } else 
                {
                    return target;
                }
            }
        }
        return m;
    }
};