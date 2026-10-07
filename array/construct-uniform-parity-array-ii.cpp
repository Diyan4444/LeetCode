class Solution {
public:
    bool uniformArray(vector<int>& nums1)
    {
        int odd = 0;
        int even = 0;
        int eve_min=INT_MAX;
        int odd_min =INT_MAX;
        int n = nums1.size();
        for(int i=0;i<n;i++)
        {
            if(nums1[i]%2==1)
            {
                if(odd_min>nums1[i])
                {
                    odd_min=nums1[i];
                }
                odd++;
            }
            else
            {
                if(eve_min>nums1[i])
                {
                    eve_min=nums1[i];
                }
                even++;
            }
        }
        if(even==n || odd==n){return true;}
        return odd_min < eve_min;
    }
};