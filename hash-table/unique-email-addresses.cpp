class Solution {
public:
    int numUniqueEmails(vector<string>& emails)
    {
        unordered_set<string> ans;
        for(string &ch : emails)
        {
            int idx = ch.find('@');
            string a="";
            for(int j=0;j<idx;j++)
            {
                if(ch[j]=='+')
                {
                    break;
                }
                if(ch[j]!='.')
                {
                    a+=ch[j];
                }
            }
            a+=ch.substr(idx);
            ans.insert(a);
        }
        return ans.size();
    }
};