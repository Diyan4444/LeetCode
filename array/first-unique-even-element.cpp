class Solution {
public:
    int firstUniqueEven(vector<int>& nums)
    {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int i: nums)
        {
            mpp[i]++;
        }
        for(int i:nums)
        {
            if(i%2==0 && mpp[i]==1)return i;
        }
        return -1;
    }
};