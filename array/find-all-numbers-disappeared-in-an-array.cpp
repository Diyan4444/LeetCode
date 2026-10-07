class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        unordered_set<int> seen(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();
        for (int i = 1; i <= n; i++) {
            if (seen.find(i) == seen.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};