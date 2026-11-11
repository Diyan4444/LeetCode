class Solution {
public:
    bool canMeasureWater(int x, int y, int t) 
    {
        if(t>x+y)return false;
        return t%gcd(x,y)==0;
    }
};