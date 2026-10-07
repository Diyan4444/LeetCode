class Solution {
public:
    ListNode* partition(ListNode* head, int x) 
    {
        vector<int> less;
        vector<int> more;
        ListNode* curr = head;
        while (curr) 
        {
            if (curr->val < x) less.push_back(curr->val);
            else more.push_back(curr->val);
            curr = curr->next;
        }
        less.insert(less.end(), more.begin(), more.end());
        ListNode* temp = head;
        for (int val : less) 
        {
            temp->val = val;
            temp = temp->next;
        }
        return head;
    }
};