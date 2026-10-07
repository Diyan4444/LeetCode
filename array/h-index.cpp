class Solution {
public:
    int hIndex(vector<int>& c) 
    {
        int count = 0;
        int n = c.size();
        sort(c.begin(),c.end(),greater<>());
        for(int i=0;i<n;i++)
        {
            if(count<c[i])
            {
                count++;
            }
            else
            {
                return count;
            }
        }
        return count;
    }
};