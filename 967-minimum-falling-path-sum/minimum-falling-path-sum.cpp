class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int mid = 0,left = 0, right =0;
        for (int r = 1;r<n;r++){
            for (int c =0;c<n;c++){
                mid = matrix[r-1][c];
                if (c >0) {
                    left = matrix[r-1][c-1];
                }
                else{
                    left = INT_MAX;
                }
                if (c<n-1){
                    right = matrix[r-1][c+1];
                }
                else{
                    right = INT_MAX;
                }
                matrix[r][c] += min({left,right,mid});

            }
        }
        int min_value = INT_MAX;
        for (int i = 0; i < n; i++) {
            min_value = min(min_value, matrix[n - 1][i]);
        }
        return min_value;

    }
};