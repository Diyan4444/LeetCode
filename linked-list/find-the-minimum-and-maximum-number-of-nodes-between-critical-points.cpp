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
    vector<int> nodesBetweenCriticalPoints(ListNode* head)
    {
        if(!head || !head->next || !head->next->next)return {-1,-1};
        vector<int> cri;
        ListNode* temp=head->next;
        ListNode* prev=head;
        int k=0;
        while(temp->next !=nullptr)
        {
            if(temp->val<temp->next->val && temp->val<prev->val)cri.push_back(k);
            else if(temp->val>temp->next->val && temp->val>prev->val)cri.push_back(k);
            k++;
            prev=temp;
            temp=temp->next;
        }
        int m = INT_MAX;
        int n=cri.size();
        if(n<2)return{-1,-1};
        for(int i=1;i<n;i++)
        {
            m=min(m,cri[i]-cri[i-1]);
        }
        int a=cri[n-1]-cri[0];
        if(m==INT_MAX)m=-1;
        return {m,a};
    }
};