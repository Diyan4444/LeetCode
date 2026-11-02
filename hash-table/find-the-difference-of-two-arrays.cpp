class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set<int> m1(nums1.begin(),nums1.end());
        unordered_set<int> m2(nums2.begin(),nums2.end());
        vector<int> n0;
        vector<int> n1;
        for(int i:m1)
        {
            if(m2.find(i) == m2.end())n0.push_back(i);
        }
        for(int i:m2)
        {
            if(m1.find(i) == m1.end())n1.push_back(i);
        }
        return {n0,n1};
    }
};