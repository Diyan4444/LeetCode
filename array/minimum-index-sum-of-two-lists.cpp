class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2)
    {
        vector<int> min_index;
        int list1_index=-1;
        int min = INT_MAX;
        int n = list1.size();
        int m = list2.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(list1[i]==list2[j])
                {
                    if(min>(i+j))
                    {
                        min = i+j;
                        min_index.clear();
                        min_index.push_back(i);
                    }
                    else if(min==i+j)
                    {
                        min_index.push_back(i);
                    }
                }
            }
        }
        vector<string> ans;
        int d = min_index.size();
        for(int i=0;i<d;i++)
        {
            ans.push_back(list1[min_index[i]]);
        }
        return ans;
    }
};