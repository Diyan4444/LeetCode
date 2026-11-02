class Solution {
public:
    bool findSubarrays(vector<int>& nums) 
    {
        int n = nums.size();
        if(n<2)return false;
        unordered_map<int,int> mpp;
        for(int i=0;i<n-1;i++)
        {
            int temp = nums[i] + nums[i+1];
            if(mpp[temp]>0)return true;
            mpp[temp]++;
        }
        return false;
    }
};