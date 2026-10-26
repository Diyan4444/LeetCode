class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int a) 
    {
        int n = c.size();
        vector<bool> ans(n,false);
        for(int i=0;i<n;i++)
        {
            c[i]+=a;
            int x = *max_element(c.begin(),c.end());
            if(c[i]==x)
            {
                ans[i]=true;
            }
            c[i]-=a;
        }
        return ans;
    }
};