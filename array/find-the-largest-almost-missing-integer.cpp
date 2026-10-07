class Solution {
public:
    int largestInteger(vector<int>& nums, int k) 
    {
        if(nums.empty()){return -1;}
        int start = nums[0];
        int cnt_1 = 0;
        int cnt_2 = 0;
        int end = nums[nums.size()-1];
        map<int,int> mpp;
        for(int x : nums)
        {
            mpp[x]++;
        }
        if(k==1)
        {
            int ans = -1;
            for (auto it : mpp) 
            {
                if (it.second == 1) 
                {
                ans = max(ans, it.first);
                }
            }
            return ans;
        }
        else if(k==nums.size())
        {
            int max_val = *max_element(nums.begin(), nums.end());
            return max_val;
        }
        else if(start!=end && nums.size()>2)
        {
            for(int i=1;i<nums.size()-1;i++)
            {
                if(start==nums[i])
                {
                    cnt_1+=1;
                }
                else if(end == nums[i])
                {
                    cnt_2+=1;
                }
            }
        }
        else return -1;
        int result;
        if(cnt_1>0 && cnt_2==0)
        {
            result = nums[nums.size()-1];
        }
        else if(cnt_1==0 && cnt_2>0)
        {
            result = nums[0];
        }
        else if(cnt_1==0 && cnt_2 ==0)
        {
            result = max(start,end);
        }
        else{return -1;}
        return result;
    }
};