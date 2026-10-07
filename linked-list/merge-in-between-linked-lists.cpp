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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode* curr=list1->next;
        int x=1;
        ListNode*prev=list1;
        while(x!=a)
        {
            prev=curr;
            curr=curr->next;
            x++;
        }
        while(x<=b && curr!=nullptr)
        {
            ListNode* temp=curr;
            curr=curr->next;
            delete temp;
            x++;
        }
        prev->next=list2;
        ListNode* curr2=list2;
        while(curr2->next!=nullptr)
        {
            curr2=curr2->next;
        }
        curr2->next=curr;
        return list1;
    }
};