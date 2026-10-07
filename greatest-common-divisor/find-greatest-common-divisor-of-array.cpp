class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        auto min = *min_element(nums.begin(),nums.end());
        auto max = *max_element(nums.begin(),nums.end());
        vector<int> temp;
        for(int i = 1; i<=min; i++)
        {
            if(min%i==0 && max%i==0)
            {
                temp.push_back(i);
            }
        }
        auto result = *max_element(temp.begin(),temp.end());
        return result;
    }
};