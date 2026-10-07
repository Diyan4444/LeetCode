class Solution {
public:
    int hIndex(vector<int>& c)
    {
        int n = c.size();
        int right=n-1;
        int left = 0;
        int ans =0;
        while(left<=right)
        {
            int mid = left + (right-left)/2;
            if(c[mid]>=n-mid)
            {
                ans = n-mid;
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        return ans;
    }
};