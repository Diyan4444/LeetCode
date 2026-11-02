class Solution {
public:
    int check(int i)
    {
        int temp =0;
        while(i>0)
        {
            temp+=i%10;
            i=i/10;
        }
        return temp;
    }
    int countEven(int num) 
    {
        int ans=0;
        for(int i=1;i<=num;i++)
        {
            if(check(i)%2==0)ans++;
        }
        return ans;
    }
};