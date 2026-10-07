class Solution {
public:
    bool isUgly(int n) 
    {
        if(n<=0){return false;}
        if(n==1){return true;}
        for(int x:{2,3,5})
        {
            while(n%x==0)
            {
                n=n/x;
            }
        }
        return n==1;
    }
};