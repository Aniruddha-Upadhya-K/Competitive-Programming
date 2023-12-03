// https://leetcode.com/problems/minimum-time-visiting-all-points

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res=0;
        for(int pointInd = 0; pointInd<points.size()-1; pointInd++) {
            res += max(abs(points[pointInd][0] - points[pointInd + 1][0]), abs(points[pointInd][1] - points[pointInd + 1][1])); 
        }
        return res;
    }
};
