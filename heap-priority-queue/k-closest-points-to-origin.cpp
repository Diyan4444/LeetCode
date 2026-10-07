class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        int j=0;
        int dist = 0;
        vector<vector<int>> temp;
        vector<int> distance1;
        for(int i = 0;i<points.size();i++)
        {
            int x = points[i][0];
            int y = points[i][1];
            dist = x*x + y*y;
            distance1.push_back(dist);
        }
        while (k > 0 && !distance1.empty()) 
        {
            auto minimum = std::min_element(distance1.begin(), distance1.end());
            int index = std::distance(distance1.begin(), minimum);
            temp.push_back(std::move(points[index]));
            *minimum = INT_MAX;
            k--;
        }
        return temp;
    }
};