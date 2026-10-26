class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        int n = prices.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int temp = prices[i];
            while(j<n)
            {
                if(prices[j]<=prices[i]) 
                {
                    temp = prices[i]-prices[j];
                    break;
                }
                j++;
            }
            ans[i]=temp;
        }
        return ans;
    }
};