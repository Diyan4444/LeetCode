class Solution {
public:
    vector<int> distributeCandies(int c, int n)
    {
        vector<int>nums(n,0);
        long long add=1;
        int i=0;
        while(c>0)
        {
            int temp = min((long long)c,add);
            nums[i%n]+=temp;
            c=c-add;
            add++;
            i++;
        }
        return nums;
    }
};