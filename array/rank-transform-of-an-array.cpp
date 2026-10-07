class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        int n = arr.size();
        vector<int> s = arr;
        sort(s.begin(),s.end());
        unordered_map<int,int> mpp;
        for(int i : s)
        {
            mpp.emplace(i,mpp.size()+1);
        }
        vector<int>temp(n);
        for(int i=0;i<n;i++)
        {
            temp[i]=mpp[arr[i]];
        }
        return temp;
    }
};