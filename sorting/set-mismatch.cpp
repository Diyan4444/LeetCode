class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        unordered_map<int,int>mpp;
        int a=0,b=0;
        for(int i : nums)
        {
            mpp[i]++;
        }
        for(int i =1;i<=nums.size();i++)
        {
            if(mpp[i]==2)
            {
                a=i;
            }
            if(mpp[i]==0)
            {
                b=i;
            }
        }
        return {a,b};
    }
};