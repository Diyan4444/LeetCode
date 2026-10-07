class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        bool check = false;
        map<int,int>mpp;
        for(int i : nums)
        {
            mpp[i]++;
            if(mpp[i]>1)
            {
                check = true;
            }
        }
        return check;
    }
};