class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) 
    {
        vector<string> ans;
        for(int i=0;i<s.length();i++)
        {
            int count =0;
            string temp = "";
            int j=i;
            while(j<s.length())
            {
                temp+=s[j];
                if(s[j]=='1')
                {
                    count++;
                }
                if(count == k)
                {
                    ans.push_back(temp);
                    break;
                }
                j++;
            }
        }
        if(ans.size()==0)
        {
            return "";
        }
        auto shortest_it = ranges::min_element(ans, [](const string& a, const string& b) 
        {
            if (a.size() != b.size()) 
            {
                return a.size() < b.size();
            }
            return a < b;
        });
        return *shortest_it;
    }
};