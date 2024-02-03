class Solution {
public:
    int maxSum(int ind,vector<int> &arr,int k,vector<int> &dp){
        int n = arr.size();
        if (ind == n) return 0;
        if(dp[ind] != -1) return dp[ind];
        int len =0;
        int maxi = INT_MIN;
        int maxiAns = INT_MIN;
        for(int j = ind;j<min(n,ind+k);j++){
            len++;
            maxi = max(maxi,arr[j]);
            int sum = len*maxi + maxSum(j+1,arr,k,dp);
            maxiAns = max(maxiAns,sum);
        }
        return dp[ind]  = maxiAns;
    }


    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int> dp(arr.size(),-1);
        return maxSum(0,arr,k,dp);
    }
};