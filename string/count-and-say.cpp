class Solution {
public:
vector<string>temp = vector<string>(31,"-1");
    string rec(int n)
    {
        if(n==1)return "1";
        if(temp[n]!="-1")return temp[n];
        string a=rec(n-1);
        string res="";
        for(int i=0;i<a.length();)
        {
            int sum=0;
            char ch = a[i];
            while(i<a.length() && a[i]==ch)
            {
                sum++;
                i++;
            }
            res+=to_string(sum);
            res+=ch;
        }
        return temp[n]=res;
    }
    string countAndSay(int n) 
    {
        return rec(n);
    }
};