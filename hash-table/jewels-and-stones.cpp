class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        unordered_set<char> jew(jewels.begin(),jewels.end());
        int count=0;
        for(char ch : stones)
        {
            if(jew.find(ch) != jew.end())
            {
                count++;
            }
        }
        return count;
    }
};