class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int> dp (26);
        for (char c:s){
            int i = c  - 'a';
            dp[i] =  1 + getMax(dp,i,k);
        }   

        return ranges::max(dp);
    }

    int getMax(vector<int> &dp , int i , int k){
        int first = max(0,i-k);
        int last = min(25,i+k);

        int maxReachable = 0;
        for (int j = first ; j <= last; j++){
            maxReachable = max(maxReachable , dp[j]);
        }
        return maxReachable;
    }
};
