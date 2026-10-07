class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) 
    {
        int n = nums.size();
        int mid=(n/2);
        int m=nums[mid];
        for(int i=0;i<n;i++)
        {
            if(mid!=i && nums[i]==nums[mid])return false;
        }
        return true;
    }
};