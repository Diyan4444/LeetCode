class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& l)
    {
        for(auto& i : l)
        {
            reverse(i.begin(),i.end());
            for(int j=0;j<i.size();j++)
            {
                i[j] = (i[j]+1)%2;
            }
        }
        return l;
    }
};