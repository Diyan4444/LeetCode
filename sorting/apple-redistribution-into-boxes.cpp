class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) 
    {
        sort(c.begin(),c.end());
        int n = a.size();
        int sum=0;
        int m=c.size();
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        int ans=0;
        int j=m-1;
        while(sum>0)
        {
            sum=sum-c[j];
            j--;
            ans++;
        }
        return ans;
    }
};