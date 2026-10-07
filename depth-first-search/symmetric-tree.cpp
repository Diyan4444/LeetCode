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
    void l(TreeNode* root, vector<int>& res)
    {
        if (!root)
        {
            res.push_back(-101);
            return;
        }
        res.push_back(root->val);
        l(root->left, res);
        l(root->right, res);
    }
    void r(TreeNode* root, vector<int>& res)
    {
        if (!root)
        {
            res.push_back(-101);
            return;
        }
        res.push_back(root->val);
        r(root->right, res);
        r(root->left, res);
    }
    bool isSymmetric(TreeNode* root)
    {
        if (!root) return true;
        vector<int> lef;
        vector<int> rig;
        l(root->left, lef);
        r(root->right, rig);
        return lef == rig;
    }
};