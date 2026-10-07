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
    void i(vector<int>&ans,TreeNode* root)
    {
        if(!root)return;
        i(ans,root->left);
        ans.push_back(root->val);
        i(ans,root->right);
    }
    int minDiffInBST(TreeNode* root)
    {
        vector<int> ans;
        i(ans,root);
        int m =INT_MAX;
        int n = ans.size();
        for(int i=0;i<n-1;i++)
        {
            m=min(m,abs(ans[i]-ans[i+1]));
        }
        return m;
    }
};