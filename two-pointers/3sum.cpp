class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int n = nums.size();
        if(n<3){return {};}
        if(n==3)
        {
            if(nums[0]+nums[1]+nums[2]==0)
            {
                return {{nums[0],nums[1],nums[2]}};
            }
            else{return{};}
        }
        sort(nums.begin(),nums.end());
        vector<vector<int>> temp;
        for(int i=0;i<n-2;i++)
        {
            if(nums[i]>0){break;}
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int left = i+1;
            int right = n-1;
            while (left < right) 
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) 
                {
                    temp.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } 
                else if (sum < 0) 
                {
                    left++;
                } 
                else 
                {
                    right--;
                }
            }
        }
        return temp;
    }
};