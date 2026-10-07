class Solution {
public:
    int gcdOfOddEvenSums(int n) 
    {
        if(n==1) return 1;
        long long int even=0;
        long long int odd = 0;
        int i = 1;
        int count = n;
        while (count>0)
        {
            odd += i;
            i += 2;
            count--;
        }
        even = odd + n;
        vector<int> temp;
        for(int j = 1; j<=odd; j++)
        {
            if(odd%j == 0 && even%j==0)
            {
                temp.push_back(j);
            }
        }
        auto result = *max_element(temp.begin(), temp.end());
        return result;
    }
};