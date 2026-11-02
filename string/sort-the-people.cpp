class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        int n = names.size();
        vector<pair<int,string>>mpp(n);
        for(int i=0;i<n;i++)mpp[i] = {heights[i],names[i]};
        sort(mpp.begin(),mpp.end(),greater<pair<int,string>>());
        vector<string> res(n);
        for(int i =0;i<n;i++)res[i] = mpp[i].second;
        return res;
    }
};