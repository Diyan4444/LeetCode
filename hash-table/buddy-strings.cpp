class Solution {
public:
    bool buddyStrings(string s, string goal) 
    {
        int n = s.length();
        if(goal.length()!=n)return false;
        if(s==goal)
        {
            unordered_set<char>temp(s.begin(),s.end());
            return temp.size()<goal.size();
        }
        int i=0,j=n-1;
        while(i<j && s[i]==goal[i])i++;
        while(j>=0 && s[j]==goal[j])j--;
        if(i<j)swap(s[i],s[j]);
        return s==goal;
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