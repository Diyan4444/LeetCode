class Solution {
private://want to see if heap can  be made more faster
    void siftDown(vector<int>& nums, int n, int i) 
    {
        int val = nums[i];
        while (true)
        {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;
            if (left < n && nums[left] > val) 
            {
                largest = left;
            }
            if (right < n && nums[right] > (largest == i ? val : nums[left])) 
            {
                largest = right;
            }
            if (largest == i) break;
            nums[i] = nums[largest];
            i = largest;
        }
        nums[i] = val;
    }
public:
    void Heapsort(vector<int>& nums) 
    {
        int n = nums.size();
        for (int i = n / 2 - 1; i >= 0; i--) 
        {
            siftDown(nums, n, i);
        }
        for (int i = n - 1; i > 0; i--) 
        {
            swap(nums[0], nums[i]);
            siftDown(nums, i, 0);
        }
    }
    vector<int> sortArray(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        Heapsort(nums);
        return nums;
    }
};