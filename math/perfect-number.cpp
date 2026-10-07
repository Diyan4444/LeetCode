class Solution {
public:
    bool checkPerfectNumber(int num)
    {
        if(num==1)return false;
        vector<int> res;
        for(int i=1;i<=num/2;i++)
        {
            if(num%i==0)
            {
                res.push_back(i);
            }
        }
        if(res == vector<int>{1,num})return false;
        int sum = 0;
        for(int i : res)
        {
            sum+=i;
        }
        return sum==num;
    }
};