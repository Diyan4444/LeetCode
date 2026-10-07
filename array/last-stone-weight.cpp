class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        if(stones.size()==1){return stones[0];}
        while(stones.size()>1)
        {
            sort(stones.begin(),stones.end());
            if(stones[stones.size()-1]==stones[stones.size()-2])
            {
                stones.erase(stones.begin()+stones.size()-1);
                stones.erase(stones.begin()+stones.size()-1);
            }
            else if(stones[stones.size()-1]>stones[stones.size()-2])
            {
                stones[stones.size()-1]-= stones[stones.size()-2];
                stones.erase(stones.begin()+stones.size()-2);
            }
        }
        return stones.empty() ? 0 : stones[0];
    }
};