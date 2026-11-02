class Solution {
public:
    int minInsertions(string s) 
    {
        int n = s.length();
        int open=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                open++;
            }
            else
            {
                if(i+1<n && s[i+1]==')')i++;
                else ans++;
                if(open>0)open--;
                else ans++;
            }
        }
        return ans + 2*open;
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
