class Solution {
public:
    bool isSelfCrossing(vector<int>& distance) 
    {
        int n = distance.size();
        if (n < 4) return false;
        int i = 2;
        while (i < n && distance[i] > distance[i - 2]) 
        {
            i++;
        }
        if (i == n) return false;
        if (distance[i] >= distance[i - 2] - (i >= 4 ? distance[i - 4] : 0)) 
        {
            distance[i - 1] -= (i >= 3 ? distance[i - 3] : 0);
        }
        i++;
        while (i < n && distance[i] < distance[i - 2]) 
        {
            i++;
        }
        return i != n;
    }
};