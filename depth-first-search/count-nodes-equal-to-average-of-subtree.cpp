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
    void inorder(TreeNode* root, int &count) 
    {
        if (!root) return;
        inorder(root->left, count);
        int sum = sum_of_values(root);
        int size = size_of_tree(root);
        if (sum / size == root->val) 
        {
            count++;
        }
        inorder(root->right, count);
    }
    int size_of_tree(TreeNode *root)
    {
        if(!root)return 0;
        return 1 + size_of_tree(root->left) + size_of_tree(root->right);
    }
    int sum_of_values(TreeNode *root)
    {
        if(!root)return 0;
        return root->val + sum_of_values(root->left) + sum_of_values(root->right);
    }
    int averageOfSubtree(TreeNode* root)
    {
        int count = 0;
        inorder(root, count);
        return count;
    }
};