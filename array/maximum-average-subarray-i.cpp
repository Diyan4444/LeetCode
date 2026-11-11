class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
        int n = nums.size();
        double curr=0;
        for(int i=0;i<k;i++)
        {
            curr+=nums[i];
        }
        double m = curr;
        for(int i=k;i<n;i++)
        {
            curr += nums[i]-nums[i-k];
            m = max(m,curr);
        }
        return (double)m/k;
    }
};