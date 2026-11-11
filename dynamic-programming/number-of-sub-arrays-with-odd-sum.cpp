class Solution {
public:
    int numOfSubarrays(vector<int>& arr) 
    {
        int mod = 1000000007;
        int ans=0;
        int n = arr.size();
        int prefix=0;
        int even=1,odd=0;
        for(int i=0;i<n;i++)
        {
            prefix+=arr[i];
            if(prefix%2==1)
            {
                ans= (ans+even)%mod;
                odd++;
            }
            else 
            {
                ans = (ans+odd)%mod;
                even++;
            }
        }
        return ans;
    }
};