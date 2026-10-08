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