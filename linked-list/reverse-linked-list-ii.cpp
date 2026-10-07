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
    ListNode* reverseBetween(ListNode* head, int left, int right)
    {
        ListNode *curr = head;
        vector<int> temp;
        int n = 0;
        while(curr)
        {
            temp.push_back(curr->val);
            n++;
            curr=curr->next;
        }
        reverse(temp.begin()+left-1,temp.begin()+right);
        ListNode *t = head;
        for(int i=0;i<n;i++)
        {
            t->val = temp[i];
            t=t->next;
        }
        return head;
    }
};