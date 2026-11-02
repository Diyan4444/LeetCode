class Solution {
public:
    double fm(vector<int>& arr) 
    {
    int n = arr.size();
    if (n == 0) return 0;
    if (n % 2 != 0)
    {
        auto mid_it = arr.begin() + n / 2;
        nth_element(arr.begin(), mid_it, arr.end());
        return *mid_it;
    } 
    else 
    {
        auto mid1_it = arr.begin() + (n / 2) - 1;
        nth_element(arr.begin(), mid1_it, arr.end());
        int val1 = *mid1_it;
        auto mid2_it = arr.begin() + (n / 2);
        nth_element(arr.begin(), mid2_it, arr.end());
        int val2 = *mid2_it;

        return (val1 + val2) / 2.0;
    }
}
    int minMoves2(vector<int>& nums) 
    {
        int m = fm(nums), ans =0;
        for(int x:nums)ans+=abs(x-m);
        return ans;
    }
};