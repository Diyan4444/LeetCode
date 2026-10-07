class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if(is_sorted(prices.begin(),prices.end(),greater<>())){return 0;}
        int k = prices.size();
        int max = 0;
        int min = INT_MAX;
        for(int i:prices)
        {
            if (i < min) 
            {
                min = i;
            } else if (i - min > max) 
            {
                max = i - min;
            }
        }
        return max;
    }
};