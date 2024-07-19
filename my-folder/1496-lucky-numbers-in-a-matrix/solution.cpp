class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int max_of_min_row = INT_MIN;
        int min_row;

        for (int i = 0; i < m; ++i) {
            min_row = INT_MAX;
            for (int j = 0; j < n; ++j) {
                min_row = min(min_row, matrix[i][j]);
            }
            max_of_min_row = max(max_of_min_row, min_row);
        }

        for (int i = 0; i < n; ++i) {
            int col_max = matrix[0][i];
            for (int j = 0; j < m; ++j) {
                col_max = max(col_max, matrix[j][i]);
            }
            if (col_max == max_of_min_row) {
                return vector<int>{col_max};
            }
        }

        return vector<int>{};
    }
};

