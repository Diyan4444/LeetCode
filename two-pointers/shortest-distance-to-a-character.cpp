class Solution {
public:
    vector<int> shortestToChar(string s, char c)
    {
        vector<int> ans;
        vector<int> idx;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]==c)idx.push_back(i);
        }
        for(int i=0;i<n;i++)
        {
            int temp = INT_MAX;
            for(int j=0;j<idx.size();j++)
            {
                temp = min(abs(idx[j]-i),temp);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};