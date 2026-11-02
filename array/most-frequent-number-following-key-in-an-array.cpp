class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) 
    {
        vector<int> ans(1001,0);
        for(int i=0;i<nums.size();i++)if(nums[i]==key &&i+1<nums.size()) ans[nums[i+1]]++;
        auto max_it = max_element(ans.begin(), ans.end());
        int idx = distance(ans.begin(), max_it);
        return idx;
    }
};