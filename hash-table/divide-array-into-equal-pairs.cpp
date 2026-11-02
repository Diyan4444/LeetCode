class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        unordered_map<int,int> mpp;
        for(int i:nums)mpp[i]++;
        for(auto [val,count] : mpp)if(count%2!=0)return false;
        return true;
    }
};