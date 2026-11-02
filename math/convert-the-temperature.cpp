class Solution {
public:
    vector<double> convertTemperature(double c) 
    {
        double f = (c*9)/5 +32;
        double
         k = c+273.15;
        return {k,f};
    }
};