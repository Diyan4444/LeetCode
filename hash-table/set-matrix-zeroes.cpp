class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        vector<int> x;
        vector<int>y;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        for(int i=0;i<x.size();i++)
        {
            int r = x[i];
            for(int j=0;j<m;j++)
            {
                matrix[r][j]=0;
            }
        }
        for(int i=0;i<y.size();i++)
        {
            int c = y[i];
            for(int j=0;j<n;j++)
            {
                matrix[j][c]=0;
            }
        }
    }
};