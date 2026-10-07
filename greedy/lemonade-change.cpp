class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        bool cond = true;
        int five = 0;
        int ten = 0;
        int twen = 0;
        for(int i : bills)
        {
            if(i==5)
            {
                five++;
            }
            if(i==10)
            {
                if(five>=1)
                {
                    ten++;
                    five--;
                }
                else
                {
                    cond = false;
                }
            }
            if(i==20)
            {
                if(five>0 && ten>0)
                {
                    twen++;
                    five--;
                    ten--;
                }
                else if(five>2)
                {
                    five=five-3;
                    twen++;
                }
                else
                {
                    cond = false;
                }
            }
        }
        return cond;
    }
};