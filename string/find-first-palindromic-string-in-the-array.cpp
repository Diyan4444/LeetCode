class Solution {
public:
    string firstPalindrome(vector<string>& w) 
    {
        int n = w.size();
        for(int i=0;i<n;i++)
        {
            string temp = w[i];
            reverse(temp.begin(),temp.end());
            if(temp==w[i])return w[i];
        }
        return "";
    }
};