class Solution {
public:
    int missingInteger(vector<int>& nums) 
    {
        int sum =nums[0];
        int n = nums.size();
        for (int i = 1; i < nums.size(); i++) 
        {
            if (nums[i] == nums[i - 1] + 1) 
            {
                sum += nums[i];
            }
             else {break;}
        }
        map<int,int>mpp;
        for (int num : nums) 
        {
            mpp[num]++;
        }
        while (mpp.find(sum) != mpp.end()) 
        {
            sum++;
        }
        return sum;
    }
};