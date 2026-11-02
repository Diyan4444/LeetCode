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
    void check(vector<TreeNode*>& res, TreeNode* root)
    {
        if(!root)return;
        check(res,root->left);
        res.push_back(root);
        check(res,root->right);
    }
    TreeNode* increasingBST(TreeNode* root)
    {
        vector<TreeNode*> res;
        check(res,root);
        if(res.empty())return nullptr;
        int n = res.size();
        TreeNode* head = res[0];
        for(int i=0;i<n;i++)
        {
            res[i]->left=nullptr;
            if(i+1<n)res[i]->right = res[i+1];
            else res[i]->right = nullptr;
        }
        return head;
    }
};
#pragma GCC optimize("Ofast")
#include <iostream>
static constexpr std::size_t max_align = alignof(std::max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static std::size_t pos = 0;
void *operator new(const std::size_t size) {
    const std::size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}
void *operator new[](const std::size_t size) {
    return operator new(size);
}
void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, std::size_t) noexcept {}
void operator delete[](void *, std::size_t) noexcept {}
