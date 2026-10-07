class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k)
    {
        vector<int> ans;
        int num = 0;
        int n = nums.size()-1;
        while (n >= 0 || k > 0)
        {
            if (n >= 0)
            {
                k += nums[n];
                n--;
            }
            ans.push_back(k % 10);
            k /= 10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};