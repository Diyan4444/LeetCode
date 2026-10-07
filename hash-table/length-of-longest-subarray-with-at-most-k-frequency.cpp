class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) 
    {
        map<int, int> freq;
        int l = 0;
        int len = 0;
        for (int r = 0; r < nums.size(); ++r) 
        {
            freq[nums[r]]++;
            while (freq[nums[r]] > k) 
            {
                freq[nums[l]]--;
                l++;
            }
            len = max(len, r - l + 1);
        }

        return len;
    }
};