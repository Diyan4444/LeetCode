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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        if(!curr1 && !curr2){return 0;}
        if(!curr1 && curr2){return list2;}
        if(!curr2 && curr1){return list1;}
        ListNode dummy(0);
        ListNode *tail = &dummy;
        while (list1 && list2) {
            if (list1->val <= list2->val) 
            {
                tail->next = list1;
                list1 = list1->next;
            } 
            else 
            {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        if (list1 != nullptr) 
        {
            tail->next = list1;
        } 
        else 
        {
            tail->next = list2;
        }
        return dummy.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        if (lists.empty()) return nullptr;
        int interval = 1;
        int n = lists.size();
        while (interval < n) 
        {
            for (int i = 0; i + interval < n; i += interval * 2) 
            {
                lists[i] = mergeTwoLists(lists[i], lists[i + interval]);
            }
            interval *= 2;
        }
        return lists[0];
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