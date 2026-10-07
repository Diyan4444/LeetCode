class Solution {
public:
    vector<int> getRow(int n)
    {
        vector<vector<int>> triangle;
        triangle.push_back({1});
        for(int i=1;i<n+1;i++)
        {
            vector<int> temp;
            temp.push_back(1);
            for(int j=1;j<i;j++)
            {
                temp.push_back(triangle[i-1][j-1] + triangle[i-1][j]);
            }
            temp.push_back(1);
            triangle.push_back(temp);
        }
        return triangle[n];
    }
};