#include <vector>
#include <algorithm>
using namespace std;
class Solution 
{
public:
    int minOperations(vector<int>& nums) 
    {
        int n = nums.size();
        if (n <= 1) 
        {
            return 0;
        }
        int idx = 0;
        for (int i = 0; i < n; ++i) 
        {
            if (nums[i] == 0) 
            {
                idx = i;
                break;
            }
        }
        bool inc = true;
        for (int i = 0; i < n; ++i) 
        {
            if (nums[(idx + i) % n] != i) 
            {
                inc = false;
                break;
            }
        }
        bool dec = true;
        for (int i = 0; i < n; ++i) 
        {
            if (nums[(idx - i + n) % n] != i) 
            {
                dec = false;
                break;
            }
        }
        if (!inc && !dec) 
        {
            return -1;
        }
        int ans = 1e9;
        if (inc) 
        {
            ans = min(ans, idx);
            int right_shifts = (n - idx) % n;
            ans = min(ans, right_shifts + 2);
        }
        if (dec) 
        {
            int left_rotations = (idx + 1) % n;
            ans = min(ans, left_rotations + 1);
            ans = min(ans, 1 + (n - 1 - idx));
        }
        return ans;
    }
};