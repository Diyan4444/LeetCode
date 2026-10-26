class Solution {
public:
    double trimMean(vector<int>& arr) 
    {
        double ans = 0;
        int n = arr.size();
        double temp = 0.05*n;
        sort(arr.begin(),arr.end());
        for(int i=0;i<temp;i++)
        {
            arr[i]=0;
            arr[n-i-1]=0;
        }
        for(int i=0;i<n;i++)
        {
            ans+=arr[i];
        }
        return (double)ans/(n-(2*temp));
    }
};