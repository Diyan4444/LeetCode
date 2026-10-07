/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) 
    {
        vector<int>val;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            val.push_back(curr->val);
            curr=curr->next;
        }
        int n = val.size();
        int l=0;int h=0;
        vector<int> ans(n,0);
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (val[j] > val[i]) 
                {
                    ans[i] = val[j];
                    break;
                }
            }
        }
        return ans;
    }
};