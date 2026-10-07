class Solution {
public:
    string toGoatLatin(string s)
    {
        stringstream ss(s);
        string word;
        string temp;
        string ma = "maa";
        string res = "";
        while(ss>>word)
        {
            if(!word.empty() && (word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u'||word[0]=='A'||word[0]=='E'||word[0]=='I'||word[0]=='O'||word[0]=='U'))
            {
                word += ma;
                ma+="a";
            }
            else if(!word.empty())
            {
                char tem = word[0];
                word.erase(0, 1);
                word+=tem;
                word+=ma;
                ma+="a";
            }
            res += word+" ";
        }
        int n = res.length();
        res.erase(n-1,n);
        return res;
    }
};