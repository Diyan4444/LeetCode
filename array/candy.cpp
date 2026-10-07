class Solution {
public:
    int candy(vector<int>& r) 
    {
        int n = r.size();
        if(n==1)return 1;
        if(n==2)
        {
            if(r[0]==r[1])
            {
                return 2;
            }
            return 3;
        }
        vector<int> ans(n,1);
        for(int i=1;i<n;i++)
        {
            if(r[i]>r[i-1])
            {
                ans[i]= 1+ ans[i-1];
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(r[i]>r[i+1])
            {
                ans[i]= max(ans[i],ans[i+1]+1);
            }
        }
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum+=ans[i];
        }
        return sum;
    }
};