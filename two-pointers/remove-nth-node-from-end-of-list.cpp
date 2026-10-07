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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if (!head) return nullptr;
        ListNode *curr = head;
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        int x = 0;
        ListNode *temp = head;
        while(temp)
        {
            x++;
            temp = temp->next;
        }
        int target = x-n;
        for(int i=0;i<target;i++)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next = curr->next;
        delete curr;
        return dummy.next;
    }
};