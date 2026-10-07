class Solution {
public:
    ListNode* removeNodes(ListNode* head) 
    {
        stack<ListNode*> st;
        ListNode* temp = head;
        while (temp != nullptr)
        {
            while (!st.empty() && st.top()->val < temp->val) 
            {
                st.pop();
            }
            st.push(temp);
            temp = temp->next;
        }
        ListNode* ans = nullptr;
        while (!st.empty()) 
        {
            ListNode* res = st.top();
            st.pop();
            res->next = ans;
            ans = res;
        }
        return ans;
    }
};