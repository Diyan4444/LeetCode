class Solution {
public:
    int maxScore(string s) 
    {
        int sum=0;
        int n = s.length();
        int i=0;
        while(i<n-1)
        {
            int z=0;
            int o=0;
            int j=0;
            while(j<=i)
            {
                if(s[j]=='0')z++;
                j++;
            }
            int k=i+1;
            while(k<n)
            {
                if(s[k]=='1')o++;
                k++;
            }
            sum = max(sum,o+z);
            i++;
        }
        return sum;
    }
};