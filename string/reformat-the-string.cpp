class Solution {
public:
    string reformat(string s) {
        int num =0;
        int let = 0;
        vector<char> letter;
        vector<char> numbers;
        for(char ch :s)
        {
            if(ch!='1'&&ch!='2'&&ch!='3'&&ch!='4'&&ch!='5'&&ch!='6'&&ch!='7'&&ch!='8'&&ch!='9'&&ch!='0')
            {
                let++;
                letter.push_back(ch);
            }
            else 
            {
                num++;
                numbers.push_back(ch);
            }
        }
        if(num>let+1 || num<let-1)return "";
        string ans ="";
        if(num>let)
        {
            for(int i=0;i<letter.size();i++)
            {
                ans+=numbers[i];
                ans+=letter[i];
            }
            ans+=numbers[numbers.size()-1];
        }
        else if(let>num)
        {
            for(int i=0;i<numbers.size();i++)
            {
                ans+=letter[i];
                ans+=numbers[i];
            }
            ans+=letter[letter.size()-1];
        }
        else if(let==num)
        {
            for(int i=0;i<numbers.size();i++)
            {
                ans+=numbers[i];
                ans+=letter[i];
            }
        }
        return ans;
    }
};