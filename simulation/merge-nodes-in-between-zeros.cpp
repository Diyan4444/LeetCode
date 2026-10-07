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
    ListNode* mergeNodes(ListNode* head)
    {
        ListNode* w = head->next;
        ListNode* curr = head->next;
        int sum = 0;

        while (curr != nullptr) 
        {
            if (curr->val == 0) 
            {
                w->val = sum;
                sum = 0;
                if (curr->next != nullptr) 
                {
                    w = w->next;
                }
            } 
            else 
            {
                sum += curr->val;
            }
            curr = curr->next;
        }
        w->next = nullptr;
        return head->next;
    }
};