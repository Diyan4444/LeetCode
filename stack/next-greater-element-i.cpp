class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int max = -1;
            int indx = -1;
            for (int j = 0; j < m; j++)
            {
                if (nums2[j] == nums1[i])
                {
                    indx = j;
                    break;
                }
            }
            for (int k = indx + 1; k < m; k++)
            {
                if (nums2[k] > nums1[i])
                {
                    max = nums2[k];
                    break;
                }
            }
            ans.push_back(max);
        }
        return ans;
    }
};