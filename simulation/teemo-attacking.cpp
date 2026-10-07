class Solution {
public:
    int findPoisonedDuration(vector<int>& x, int k){
        if (x.empty()) return 0;
        int n = x.size();
        int ans=0;
        for(int i =0;i<n-1;i++)
        {
            ans += min(k, x[i + 1] - x[i]);
        }
        ans += k;
        return ans;
    }
};