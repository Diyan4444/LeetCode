class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        auto lower = lower_bound(nums.begin(), nums.end(), target);
        if (lower == nums.end() || *lower != target)
        {
            return {-1, -1};
        }
        auto upper = upper_bound(nums.begin(), nums.end(), target);
        int start = distance(nums.begin(), lower);
        int end = distance(nums.begin(), upper) - 1;
        return {start, end};
    }
};