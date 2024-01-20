class Solution {
public:
    long long MOD = 1000000007;
    long long sumSubarrayMins(vector<int>& arr) {
        long long n = arr.size();
        vector<long long> dp(n);
        stack<long long> stk;
        long long sum = 0;

        for (long long i = 0; i < n; i++) {
            while (!stk.empty() && arr[i] < arr[stk.top()]) {
                stk.pop();
            }
            long long prev = (stk.empty()) ? -1 : stk.top();
            dp[i] = (i - prev) * arr[i] + ((prev == -1) ? 0 : dp[prev]);
            sum = (sum + dp[i]) % MOD;
            stk.push(i);
        }

        return sum;
    }
};