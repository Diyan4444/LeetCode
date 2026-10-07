class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int min_len = strs[0].size();
        string result;
        int n = strs.size();  
        for (int j = 0; j < strs[0].size(); j++) 
        {
            char target = strs[0][j];
            for (int i = 1; i < strs.size(); i++) 
            {
                if (j >= strs[i].size() || strs[i][j] != target) 
                {
                    return result;
                }
            }
            result += target;
        }
        return result;
    }
};