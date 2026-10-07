class Solution {
public:
    int maxProduct(int n) 
    {
        vector<int> temp;
        int og = n;
        while (og>0)
        {
            int x = og%10;
            temp.push_back(x);
            og=og/10;
        }
        int max_1 = *max_element(temp.begin(),temp.end());
        auto index = find(temp.begin(),temp.end(),max_1);
        if(index != temp.end())
        {
            temp.erase(index);
        }
        int max_2 = *max_element(temp.begin(),temp.end());
        int product = max_1*max_2;
        return product;
    }
};