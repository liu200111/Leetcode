class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix[0][0] > target) return false;
        for (int i = 0; i < matrix.size(); ++i) {
            if (matrix[i][0] == target) return true;
            else if (matrix[i][0] > target) {
                for (int j = 1; j < matrix[0].size(); ++j) {
                    if (matrix[i-1][j] == target) return true;
                    else if (matrix[i-1][j] > target) return false;
                }
            }
            else {
                for (int j = 1; j < matrix[0].size(); ++j) {
                    if (matrix[i][j] == target) return true;
                    else if (matrix[i][j] > target) return false;
                }
            }
        }
        return false;
    }
};
