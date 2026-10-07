class Solution {
public:
    int countLargestGroup(int n)
    {
        if (n < 10) return n;
        unordered_map<int, int> mpp;
        int s = 0;
        for (int i = 1; i <= n; ++i) 
        {
            int temp = i;
            int sum = 0;
            while (temp > 0) 
            {
                sum += temp % 10;
                temp /= 10;
            }
            mpp[sum]++;
            s = max(s, mpp[sum]);
        }        
        int res = 0;
        for (auto [key, count] : mpp) 
        {
            if (count == s) 
            {
                res++;
            }
        }
        return res;
    }
};