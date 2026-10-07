class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        vector<vector<int>>res;
        int m = INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            m = min(m,arr[i+1]-arr[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i] == m)
            {
                res.push_back({arr[i],arr[i+1]});
            }
        }
        return res;
    }
};