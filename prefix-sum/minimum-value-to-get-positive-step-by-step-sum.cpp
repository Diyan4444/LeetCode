class Solution {
public:
    int minStartValue(vector<int>& nums)
    {
        int n=nums.size();
        int m=0;
        int temp=0;
        for(int x:nums)
        {
            temp+=x;
            m = min(m,temp);
        }
        return 1-m;
    }
};