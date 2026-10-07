class Solution {
public:
    bool validMountainArray(vector<int>& arr)
    {
        int n = arr.size();
        if(n<3)return false;
        if(is_sorted(arr.begin(),arr.end()))return false;
        if(is_sorted(arr.begin(),arr.end(),greater<>()))return false;
        int i=0;
        int idx=0;
        while(i<n-1)
        {
            if(arr[i]==arr[i+1])return false;
            if(arr[i]>arr[i+1])
            {
                idx = i;
                break;
            }
            i++;
        }
        for(int j=idx;j<n-1;j++)
        {
            if(arr[j]<=arr[j+1])
            {
                return false;
            }
        }
        if(arr[idx]==arr[idx-1])return false;
        if(arr[idx]==arr[idx+1])return false;
        return true;
    }
};