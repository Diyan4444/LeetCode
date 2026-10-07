/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void i(TreeNode *root,vector<int>&res)
    {
        if(!root){return;}
        i(root->left,res);
        res.push_back(root->val);
        i(root->right,res);
    }
    int getMinimumDifference(TreeNode* root)
    {
        vector<int> ans;
        i(root,ans);
        int min1 = INT_MAX;
        int n = ans.size();
        if(n==2)return abs(ans[0]-ans[1]);
        for(int i=1;i<n;i++)
        {
            min1 = min(min1, ans[i]-ans[i-1]);
        }
        return min1;
    }
};