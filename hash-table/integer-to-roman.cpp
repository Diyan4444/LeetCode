class Solution {
public:
    string M(int x)
    {
        vector<string> m = {"","M","MM","MMM"};
        return m[x];
    }
    string C(int x)
    {
        vector<string> m = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        return m[x];
    }
    string X(int x)
    {
        vector<string> m = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        return m[x];
    }
    string I(int x)
    {
        vector<string> m = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        return m[x];
    }
    string intToRoman(int num) 
    {
        return M(num/1000) + C((num%1000)/100) + X((num%100)/10) + I((num%10));
    }
};