class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        unordered_map<int,bool> mpp;
        for(auto i:nums)
        {
            if(mpp[i]==true)return i;
            mpp[i]=true;
        }
        return 0;
    }
};