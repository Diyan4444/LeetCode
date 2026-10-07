class Solution {
public:
    int findLucky(vector<int>& arr)
    {
        unordered_map<int,int>mpp;
        for(int i : arr)
        {
            mpp[i]++;
        }
        int m=-1;
        for(auto [val,count] : mpp)
        {
            if(val==count)
            {
                m = max(m,val);
            }
        }
        return m;
    }
};