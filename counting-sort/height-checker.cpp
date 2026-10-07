class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        int n=heights.size();
        vector<int> temp = heights;
        sort(temp.begin(),temp.end());
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(temp[i]!=heights[i])sum++;
        }
        return sum;
    }
};