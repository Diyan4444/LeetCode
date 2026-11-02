class Solution {
public:
    void check(vector<vector<int>>& res, vector<int>& ans, int start,int n,int k)
    {
        if(ans.size()==k)
        {
            res.push_back(ans);
            return;
        }
        for (int i = start; i <= n; i++)
        {
            ans.push_back(i);
            check(res, ans, i + 1, n, k);
            ans.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>>res;
        vector<int>ans;
        check(res,ans,1,n,k);
        return res;
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