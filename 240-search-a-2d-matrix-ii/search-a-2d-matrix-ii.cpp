class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = size(matrix), n = size(matrix[0]), i = 0, j = n - 1;
        
        while (i < m and j >= 0) {
            if (matrix[i][j] == target) {
                return true;
            }
            if (matrix[i][j] > target) --j;
            else if (matrix[i][j] < target) ++i;
        }
        return false;
    }
};