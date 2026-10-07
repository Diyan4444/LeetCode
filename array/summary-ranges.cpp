class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty()) return {};
        
        vector<string> res;
        int n = nums.size();
        long long l = nums[0];
        long long r = nums[0];

        for (int i = 0; i < n - 1; i++)
        {
            if ((long long)nums[i + 1] == (long long)nums[i] + 1)
            {
                r = nums[i + 1];
            }
            else
            {
                if (l == r)
                {
                    res.push_back(to_string(l));
                } else
                {
                    res.push_back(to_string(l) + "->" + to_string(r));
                }
                l = nums[i + 1];
                r = nums[i + 1];
            }
        }
        if (l == r) {
            res.push_back(to_string(l));
        } else {
            res.push_back(to_string(l) + "->" + to_string(r));
        }
        return res;
    }
};