class Solution {
public:
    int mySqrt(int x)
    {
        if (x < 2) return x;
        long long low=0;
        long long high=x;
        while(low<=high)
        {
            long long mid = low+(high-low)/2;
            if(mid*mid==(long)x)return mid;
            else if(mid*mid<(long)x && (mid+1)*(mid+1) > (long)x)return mid;
            else if(mid*mid>(long)x)high=mid-1;
            else low=mid+1;
        }
        return low;
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
