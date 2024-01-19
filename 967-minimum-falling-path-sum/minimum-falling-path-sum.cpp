class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int> (n, -1));
        for(int i=0;i<n;i++){
            dp[n-1][i] = matrix[n-1][i];
        }
        for(int row=n-2 ;row>=0;row--){
            for (int col = 0;col<n;col++){
                //down
                int down = matrix[row][col] + dp[row+1][col];
                //left
                int left = matrix[row][col] + (col-1 <0 ? 1e9 :dp[row+1][col-1]);   
                //right
                int right = matrix[row][col] + (col +1 >=n ? 1e9 :dp[row+1][col+1]);   
                //min of three;
                dp[row][col] = min(down, min(left, right));

            }
        }
        int mini = INT_MAX;
        for(int i =0;i<n;i++){
            mini = min(mini,dp[0][i]);
        }
        return mini;
    }        
};