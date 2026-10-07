class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost)
    {
        int prev = cost[0];
        int curr = cost[1];
        int n = cost.size();
        for (int i = 2; i < n; i++) 
        {
            int current = cost[i] + min(curr, prev);
            prev = curr;
            curr = current;
        }
        return min(curr, prev);
    }
};