class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n)
    {
        int h = f.size();
        if (n <= 0) return true;
        if (h == 1) return f[0] == 0 && n <= 1;
        if (h == 2) return f[0] == 0 && f[1] == 0 && n <= 1;
        if (f[0] == 0 && f[1] == 0) 
        {
            n--;
            f[0] = 1;
        }
        for(int i=1;i<h-1;i++)
        {
            if(f[i-1]==0 && f[i+1]==0 && f[i]==0)
            {
                f[i]=1;
                n--;
            }
        }
        if(h>2 && f[h-1]==0 && f[h-2]==0)
        {
            n--;
            f[h-1]=1;
        }
        return n<=0;
    }
};