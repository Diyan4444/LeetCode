class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums)
    {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int max = -1;
            int index = -1;
            for(int j=0;j<n;j++)
            {
                if(j>=0 && max<nums[j])
                {
                    max = nums[j];
                    index = j;
                }
            }
            nums[index]=-i-1;
        }
        for(int& i : nums)
        {
            i=-i;
        }
        vector<string> ans(nums.size());
        transform(nums.begin(), nums.end(), ans.begin(), [](int n)
        {
            return to_string(n);
        });
        for (size_t i = 0; i < ans.size(); i++) 
        {
            if (ans[i] == "1") 
            {
                ans[i] = "Gold Medal";
            } 
            else if (ans[i] == "2") 
            {
                ans[i] = "Silver Medal";
            } 
            else if (ans[i] == "3") 
            {
                ans[i] = "Bronze Medal";
            }
        }
        return ans;
    }
};