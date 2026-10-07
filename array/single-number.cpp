class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        map<int,int>mpp;
        for(int i : nums)
        {
            mpp[i]++;
        }
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int result =0;
        for(int i : nums)
        {
            if(mpp[i]==1)
            {
                result = i;
            }
        }
        return result;
    }
};