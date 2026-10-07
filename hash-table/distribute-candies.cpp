class Solution {
public:
    int distributeCandies(vector<int>& c)
    {
        unordered_set<int> s(c.begin(),c.end());
        return min((c.size())/2,s.size());
    }
};