class Solution {
public:
    string restoreString(string s, vector<int>& nums) 
    {
        int n = s.length();
        string ans(n,' ');
        for(int i=0;i<n;i++)
        {
            ans[nums[i]]=s[i];
        }
        return ans;
    }
};