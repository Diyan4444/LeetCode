class Solution {
public:
    vector<int> twoSum(vector<int>& d, int target)
    {
        int i=0;
        int j=d.size()-1;
        while(i<j)
        {
            int s = d[i]+d[j];
            if(s==target)return {i+1,j+1};
            else if(s>target)j--;
            else i++;
        }
        return {};
    }
};