class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const vector<int>& l, const vector<int>& r) {
            if (l[1] == r[1])
                return l[0] < r[0];
            return l[1] < r[1];
        });
        
        int res = 1;
        int pos = points[0][1];
        for (const auto& point : points) {
            if (point[0] <= pos) continue;
            
            res++;
            pos = point[1];
        }
        
        return res;
    }
};