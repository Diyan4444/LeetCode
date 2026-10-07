class Solution {
public:
    bool isMonotonic(vector<int>& nums)
    {
        bool inc = false;
        bool dec = false;
        if(is_sorted(nums.begin(),nums.end()))inc=true;
        if(is_sorted(nums.begin(),nums.end(),greater<>()))dec = true;
        return inc || dec;
    }
};