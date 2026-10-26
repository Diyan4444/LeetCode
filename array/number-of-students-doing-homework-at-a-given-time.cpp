class Solution {
public:
    int busyStudent(vector<int>& st, vector<int>& et, int qt) 
    {
        int count =0;
        for(int i=0;i<st.size();i++)if(et[i]>=qt && st[i]<=qt)count++;
        return count;
    }
};