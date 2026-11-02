class Solution {
public:
    bool validPalindrome(string s) 
    {
        int l = 0,r = s.length()-1;
        int n = r+1;
        while(l<r)
        {
            if(s[l]==s[r])
            {
                l++;
                r--;
            }
            else
            {
                return check(s,l+1,r) || check(s,l,r-1);
            }
        }
        return true;
    }
    bool check(string& s,int l, int r)
    {
        while(l<r)
        {
            if(s[l]==s[r])
            {
                l++;
                r--;
            }
            else return false;
        }
        return true;
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
