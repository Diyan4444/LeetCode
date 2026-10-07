class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) 
    {
        if(is_sorted(prices.begin(),prices.end(),greater<>())){return 0;}
        int ma = 0;
        int mi = prices[0];
        for(int i:prices)
        {
            if(i < mi)
            {
                mi = i;
            }
            else if(0 < i - mi - fee)
            {
                ma += i-mi-fee;
                mi = i-fee;
            }
        }
        return ma;
    }
};