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
    void io(TreeNode* root,unordered_map<int,int> &x) 
    {
        if (!root) return;
        io(root->left,x);
        x[root->val]++;
        io(root->right,x);
    }
    vector<int> findMode(TreeNode* root)
    {
        unordered_map<int,int>mpp;
        io(root,mpp);
        int max1=0;
        vector<int> ans;
        for(auto[val,count] : mpp)
        {
            if(max1<count)
            {
                max1=count;
            }
        }
        for(auto [num,count] : mpp)
        {
            if(max1==count)
            {
                ans.push_back(num);
            }
        }
        return ans;
    }
};