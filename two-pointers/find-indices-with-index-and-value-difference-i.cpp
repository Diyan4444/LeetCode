class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int d, int v) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int j=i+d;
            while(j<n)
            {
                if(abs(nums[i]-nums[j])>=v)return {i,j};
                j++;
            }
        }
        return {-1,-1};
    }
};