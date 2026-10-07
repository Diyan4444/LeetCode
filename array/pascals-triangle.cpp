class Solution {
public:
    vector<vector<int>> generate(int n)
    {
        if(n==1)return {{1}};
        if(n==2)return {{1},{1,1}};
        vector<vector<int>> triangle;
        triangle.push_back({1});
        triangle.push_back({1,1});
        for(int i=2;i<n;i++)
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
        return triangle;
    }
};