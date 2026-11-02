class Solution {
public:
    int findFinalValue(vector<int>& nums, int og) 
    {
        sort(nums.begin(),nums.end());
        for(int i: nums)
        {
            if(og==i)og=2*og;
        }
        return og;
    }
};