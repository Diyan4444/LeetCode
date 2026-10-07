class Solution {
public:
    string largestNumber(vector<int>& nums)
    {
        int n = nums.size();
        vector<string> temp;
        for(int i=0;i<n;i++)
        {
            temp.push_back(to_string(nums[i]));
        }
        sort(temp.begin(),temp.end(),[](const string& a,const string& b)
        {
            return a+b>b+a;
        });
        if (temp[0] == "0") {
            return "0";
        }
        string ans ="";
        for(string& i:temp)
        {
            ans+=i;
        }
        return ans;
    }
};