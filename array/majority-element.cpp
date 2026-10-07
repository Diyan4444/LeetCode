class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int,int> mpp;
        int n = nums.size();
        int result = 0;
        for(int i : nums)
        {
            mpp[i]++;
        }
        for(int i : nums)
        {
            if(mpp[i]>n/2)
            {
                return i;
            }
        }
        return result;
    }
};