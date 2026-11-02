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
    vector<ListNode*> splitListToParts(ListNode* head, int k) 
    {
        ListNode* temp=head;
        int n=0;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        ListNode* curr=head;
        int size=n/k;
        int rem=n%k;
        vector<ListNode*> ans; 
        for(int i=0;i<k;i++)
        {
            ans.push_back(curr);
            int size_temp=size;
            if(rem>0)
            {
                rem--;
                size_temp++;
            }
            for(int j=1;j<size_temp;j++)
            {
                curr=curr->next;
            }
            if(curr!=nullptr)
            {
                ListNode* temp = curr;
                curr=curr->next;
                temp->next = nullptr;
            }
        }
        return ans;
    }
};
#pragma GCC optimize("Ofast")
#include <iostream>
static constexpr std::size_t max_align = alignof(std::max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static std::size_t pos = 0;
void *operator new(const std::size_t size) {
    const std::size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}
void *operator new[](const std::size_t size) {
    return operator new(size);
}
void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, std::size_t) noexcept {}
void operator delete[](void *, std::size_t) noexcept {}
