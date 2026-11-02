class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) 
    {
        vector<int> even;
        vector<int> odd;
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)even.push_back(nums[i]);
            else if(i%2==1)odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        int j=0;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)ans[i]=even[j++];
            else if(i%2==1)ans[i]=odd[k++];
        }
        return ans;
    }
};