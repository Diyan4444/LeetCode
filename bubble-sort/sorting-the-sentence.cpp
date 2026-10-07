class Solution {
public:
    string sortSentence(string s)
    {
        vector<string> ans(10);
        string temp;
        stringstream ss(s);
        string word;
        int count = 0;
        while(ss>>word)
        {
            int index = word.back()-'0';
            word.pop_back();
            ans[index]=word;
            count++;
        }
        string res = "";
        for (int i = 1; i <= count; i++) {
            res += ans[i];
            if (i < count) {
                res += " ";
            }
        }
        return res;
    }
};