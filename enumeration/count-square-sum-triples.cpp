class Solution {
public:
    int countTriples(int n) 
    {
        int count=0;
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                int temp = i*i + j*j;
                int c = sqrt(temp);
                if(c*c == temp && c<=n)count++;
            }
        }
        return count;
    }
};