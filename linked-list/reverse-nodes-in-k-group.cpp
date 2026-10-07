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
    ListNode* reverseKGroup(ListNode* head, int k){
        ListNode *curr = head;
        int x = 0;
        while(curr)
        {
            x++;
            curr=curr->next;
        }
        int n = x/k;
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        curr = head;

        for (int i = 0; i < n; i++)
        {
            ListNode* groupPrev = nullptr;
            ListNode* groupHead = curr; 
            for (int j = 0; j < k; j++)
            {
                ListNode* nextNode = curr->next;
                curr->next = groupPrev;
                groupPrev = curr;
                curr = nextNode;
            }
            prev->next = groupPrev;
            groupHead->next = curr;
            prev = groupHead;
        }
        return dummy.next;
    }
};