class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        nums1.resize(m + n);

        int i = m, j = 0;
        while (j < n)
        {
            nums1[i++] = nums2[j++];
        }

        sort(nums1.begin(), nums1.end());

        int z = nums1.size();

        if (z % 2 == 0)
            return (nums1[z/2 - 1] + nums1[z/2]) / 2.0;
        else
            return nums1[z/2];
    }
};
