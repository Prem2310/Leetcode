class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int l = 0, r = n - 1;
        
        while (l < r) {
            for (int i = 0; i < r - l; i++) {
                int top,bottom;
                top = l;
                bottom = r;
                int topElement = matrix[top][l + i]; // save top
                matrix[top][l + i] = matrix[bottom - i][l]; // left to top
                matrix[bottom - i][l] = matrix[bottom][r - i]; // bottom to left
                matrix[bottom][r - i] = matrix[top + i][r]; // right to bottom
                matrix[top + i][r] = topElement; // top to right
            }
            l++;
            r--;
        }
    }
};
