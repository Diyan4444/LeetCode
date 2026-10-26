class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>0;j--)if(arr[i]==2*arr[j] && i!=j)return true;
        }
        return false;
    }
};