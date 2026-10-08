class Solution {
public:
    vector<int> beautifulArray(int n)
    {
        if(n==1)return {1};
        if(n==2)return {1,2};
        if(n==3)return {1,3,2};
        vector<int>ans;
        ans.push_back(1);
        while(n > ans.size())
        {
            vector<int>temp;
            for(int i : ans)
            {
                if(2*i - 1 <= n)
                    temp.push_back(2*i - 1);
            }
            for(int i : ans)
            {
                if(2*i <= n)
                    temp.push_back(2*i);
            }
            ans = temp;
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