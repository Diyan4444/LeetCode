class Solution {
public:
void r(vector<int>& nums) 
{
    if (nums.empty()) return;
    int max_val = *max_element(nums.begin(), nums.end());
    for (long long exp = 1; max_val / exp > 0; exp *= 10) 
    {
        vector<int> output(nums.size());
        int count[10] = {0};
        for (int x : nums)
        {
            count[(x / exp) % 10]++;
        }
        for (int i = 1; i < 10; ++i) 
        {
            count[i] += count[i - 1];
        }
        for (int i = (int)nums.size() - 1; i >= 0; --i) 
        {
            int digit = (nums[i] / exp) % 10;
            output[count[digit] - 1] = nums[i];
            count[digit]--;
        }
        nums = move(output);
    }
}
    int maximumGap(vector<int>& nums)
    {
        int n = nums.size();
        if(n==1)return 0;
        r(nums);
        int ans=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            ans=max(ans,abs(nums[i]-nums[i+1]));
        }
        return ans;
    }
};