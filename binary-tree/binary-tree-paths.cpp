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
    void search(TreeNode* root, string s, vector<string>& ans)
    {
        if(!root) return;
        s+=to_string(root->val);
        if(!root->left && !root->right)
        {
            ans.push_back(s);
            return;
        }
        if(root->left)
        {
            search(root->left,s+"->",ans);
        }
        if(root->right)
        {
            search(root->right,s+"->",ans);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root){
        vector<string> res;
        search(root,"",res);
        return res;
    }
};