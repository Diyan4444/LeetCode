class Solution {
public:
    vector<int> countBits(int n) 
    {
        if(n==0)return {0};
        vector<int> ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++)
        {
            unsigned long long rem=0;
            int num = i;
            while(num>0)
            {
                if(num%2==1)
                {
                    rem++;
                }
                num=num/2;
            }
            ans.push_back(rem);
        }
        return ans;
    }
};