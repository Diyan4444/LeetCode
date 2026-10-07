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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(!head || head->next == nullptr)return head;
        ListNode* curr=head;
        ListNode* ahead=head->next;
        ListNode* temp1 = ahead;
        while(ahead && ahead->next)
        {
            ListNode* temp = ahead->next;
            curr->next=temp;
            ahead->next=curr->next->next;
            curr=curr->next;
            ahead=ahead->next;
        }
        curr->next=temp1;
        return head;
    }
};