class Solution {
public:
    string simplifyPath(string path)
    {
        vector<string> s;
        stringstream ss(path);
        string word;
        while(getline(ss,word,'/'))
        {
            if(word=="" || word==".")continue;
            if(word=="..")
            {
                if(!s.empty())s.pop_back();
            }
            else s.push_back(word);
        }
        if(s.empty())return"/";
        string res="";
        for(string& ch: s)
        {
            res+= "/" + ch;
        }
        return res;
    }
};