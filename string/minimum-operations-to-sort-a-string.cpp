class Solution {
public:
    int minOperations(string s) 
    {
        int n = s.size();
        if (is_sorted(s.begin(), s.end()))return 0;
        if (n == 2) return -1;
        char first = s.front();
        char last = s.back();
        char smallest = *min_element(s.begin() + 1, s.end() - 1);
        char largest = *max_element(s.begin() + 1, s.end() - 1);
        if (first <= last && (first <= smallest || last >= largest))return 1;
        if (first > largest && last < smallest)return 3;
        return 2;
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