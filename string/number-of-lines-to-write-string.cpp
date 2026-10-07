class Solution {
public:
    int ret(vector<int>& widths,int i)
    {
        return widths[i];
    }
    vector<int> numberOfLines(vector<int>& widths, string s)
    {
        int rem=0;
        int line=1;
        int sum = 0;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            int temp = s[i];
            sum+=ret(widths,temp-'a');
            if(sum>100)
            {
                sum = 0;
                i--;
                line++;
            }
        }
        return {line,sum};
    }
};