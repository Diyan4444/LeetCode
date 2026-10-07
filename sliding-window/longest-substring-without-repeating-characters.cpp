class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int len = 0;
        vector<char> nums;
        for(int i = 0; i < s.length(); i++)
        {
            auto it = std::find(nums.begin(), nums.end(), s[i]);
            if(it != nums.end())
            {
                nums.erase(nums.begin(), it + 1);
            }
            nums.push_back(s[i]);
            if(nums.size() > len) {
                len = nums.size(); 
            }
        }
        return len;
    }
};