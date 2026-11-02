class Solution {
public:
    int countGoodSubstrings(string s) 
    {
        int n = s.length();
        if(n<3)return 0;
        unordered_set<string> p;
        int ans=0;
        for(int i=0;i<n-2;i++)
        {
            char a = s[i];
            char b = s[i+1];
            char c = s[i+2];
            if(a!=b && a!=c && b!=c)ans++;
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