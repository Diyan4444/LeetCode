class Solution {
public:
    string fractionToDecimal(int n, int d) 
    {
        if (n == 0)
        {
            return "0";
        }
        string res = "";
        if ((n < 0) ^ (d < 0))
        {
            res += '-';
        }
        long long num = abs((long long)n);
        long long den = abs((long long)d);
        res += to_string(num / den);
        long long rem = num % den;
        if (rem == 0)
        {
            return res;
        }
        res+=".";
        unordered_map<long long,int> mpp;
        while(rem!=0)
        {
            if(mpp.count(rem))
            {
                res.insert(mpp[rem],"(");
                res+=")";
                break;
            }
            mpp[rem] = res.size();
            rem *=10;
            res+=to_string(rem/den);
            rem = rem%den;
        }
        return res;
    }
};