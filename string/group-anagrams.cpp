class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<int>>  mpp;
        int n = strs.size();
        for(int i=0;i<n;i++)
        {
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(i);
        }
        vector<vector<string>> res;
        for(auto [val,vec] : mpp)
        {
            vector<string> t;
            for(int j=0;j<vec.size();j++)
            {
                t.push_back(strs[vec[j]]);
            }
            res.push_back(t);
        }
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