class Solution {
public:
    bool check(string s)
    {
        string temp=s;
        reverse(s.begin(),s.end());
        return s==temp;
    }
    void solve(vector<vector<string>>& ans, vector<string>& res,int index, string& s)
    {
        if(index==s.length())
        {
            ans.push_back(res);
            return;
        }
        for(int j=index;j<s.length();j++)
        {
            string temp = s.substr(index,j-index+1);
            if(check(temp))
            {
                res.push_back(temp);
                solve(ans, res, j + 1, s);
                res.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>> ans;
        vector<string> res;
        solve(ans,res,0,s);
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
