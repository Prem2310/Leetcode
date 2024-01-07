class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        vector<unordered_map<long long, int>> dp(n);
        
        for (int i = 0; i < n; ++i) {
            vector<long long> diffs; 
            for (int j = 0; j < i; ++j) {
                long long diff = (long long)nums[i] - nums[j];
                if (dp[j].find(diff) != dp[j].end()) {
                    dp[i][diff] += dp[j][diff]; 
                    res += dp[j][diff]; // Update result
                }
                diffs.push_back(diff); // Store unique differences for i
            }
            for (long long diff : diffs) {
                dp[i][diff]++; // Increment count for new differences for i
                res++; // Update result for new differences
            }
        }
        


        return res -((int)n*(n-1)/2);
    }

};