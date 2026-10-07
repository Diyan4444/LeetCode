class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s){
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int n = g.size();
        int m = s.size();
        int a=0;
        int b=0;
        while(a<n && b<m)
        {
            if(g[a]<=s[b])
            {
                a++;
            }
            b++;
        }
        return a;
    }
};