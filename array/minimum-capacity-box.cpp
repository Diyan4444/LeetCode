class Solution {
public:
    int minimumIndex(vector<int>& c, int o)
    {
        int n = c.size();
        int m=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(c[i]>=o)
            {
                m = min(m,c[i]);
            }
        }
        if(m!=INT_MAX)
        {
            auto it = find(c.begin(),c.end(),m);
            if (it != c.end())
            {
                return it-c.begin();
            }
        }
        return -1;
    }
};