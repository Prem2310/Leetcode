class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp;
        if (n==0) return 1;
        if (n==1) return 1;
        dp.push_back(1);
        dp.push_back(2);
        for (int i =2;i<n;i++){
            dp.push_back(dp[i-1]+dp[i-2]);
        }
        return dp[n-1];
        
    }
};