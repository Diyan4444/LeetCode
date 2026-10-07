class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust)
    {
        if (n == 1 && trust.empty()) return 1;
        map<int, int> tc;
        unordered_set<int> to;
        int m = trust.size();
        for (int i = 0; i < m; i++) 
        {
            to.insert(trust[i][0]);
            tc[trust[i][1]]++;
        }
        for (auto [val, count] : tc) 
        {
            if (count == n - 1 && to.find(val) == to.end()) 
            {
                return val;
            }
        }
        return -1;
    }
};