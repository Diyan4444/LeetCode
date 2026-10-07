class Solution {
public:
    int findComplement(int num){
        int l=0;
        int og= num;
        while(num>0)
        {
            l++;
            num=num/2; 
        }
        return pow(2,l)-1-og;
    }
};