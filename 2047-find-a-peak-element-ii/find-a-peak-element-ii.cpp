class Solution {
public:
    int rowIndex(vector<vector<int>>& mat, int col){
        int max_index = 0;
        int max_element = mat[0][col];
        
        for (int i = 1; i < mat.size(); ++i){
            if (mat[i][col] > max_element){
                max_element = mat[i][col];
                max_index = i;
            }
        }
        
        return max_index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int l = 0;
        int r = m-1;

        while ( l <= r ){
            int mid = ( l + r ) / 2;

            int row = rowIndex(mat, mid);

            int left = (mid - 1) >= 0 ? mat[row][mid-1] : -1;
            int right = (mid + 1) < m ? mat[row][mid+1] : -1;
            
            if ((mat[row][mid] > left) && (mat[row][mid] > right)){
                return {row, mid};
            }
            else if (mat[row][mid] < left){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return {-1 , -1};
    }

};