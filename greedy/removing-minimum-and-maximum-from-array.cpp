class Solution {
public:
    int minimumDeletions(vector<int>& nums) 
    {
        if(nums.size()==1){return 1;}
        int n = nums.size();
        int min1 = *min_element(nums.begin(),nums.end());
        int max1 = *max_element(nums.begin(),nums.end());
        int min_loc = -1;
        int max_loc = -1;
        for(int i=0;i<nums.size();i++)
        {
            if(min1==nums[i])
            {
                min_loc=i;
            }
            if(max1==nums[i])
            {
                max_loc=i;
            }
        }
        int a = min(min_loc,max_loc);
        int b = max(min_loc,max_loc);
        int dell = b+1;
        int delr = n-a;
        int delb = a+1 + n-b;
        return min({dell,delr,delb});
        return 1;
    }
};