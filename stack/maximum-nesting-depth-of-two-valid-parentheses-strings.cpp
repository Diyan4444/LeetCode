class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq)
    {
        vector<int> ans;
        int x =0;
        for(int i: seq)
        {
            int temp = x;
            if(i=='(')
            {
                ans.push_back(x%2);
                x++;
            }
            else
            {
                x--;
                ans.push_back(x%2);
            }
        }
        return ans;
    }
};