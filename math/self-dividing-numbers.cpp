#include <vector>

using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            int temp = i;
            bool cond = true;
            while (temp > 0) 
            {
                int d = temp % 10;
                if (d == 0 || i % d != 0) 
                {
                    cond = false;
                    break;
                }
                temp /= 10;
            }
            if (cond) 
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};