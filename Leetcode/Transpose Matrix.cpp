// https://leetcode.com/problems/transpose-matrix/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> res(cols);
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                res[j].push_back(matrix[i][j]);
            }
        }
        return res;
    }
};
