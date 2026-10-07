class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        int n = nums.size();
        int s=nums[0];
        int l=nums[0];
        int ans = nums[0];
        for(int i=1;i<n;i++)
        {
            int x=nums[i];
            if(x<0)swap(s,l);
            l=max(x,l*x);
            s=min(x,s*x);
            ans=max(ans,l);
        }
        return ans;
    }
};