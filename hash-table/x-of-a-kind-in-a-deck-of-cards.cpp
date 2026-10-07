class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        if(deck.size()==1){return false;}
        unordered_map<int,int>mpp;
        for(int i : deck)
        {
            mpp[i]++;
        }
        int cg = 0;
        for (auto& [c, count] : mpp)
        {
            cg = gcd(cg, count);
        }
        return cg >= 2;
    }
};