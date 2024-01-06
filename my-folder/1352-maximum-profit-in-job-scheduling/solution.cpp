class Solution {
public:
    int dp[50001];
    int n ;
    int getNextIndex(vector<vector<int>> &jobs , int i , int currJobEnd) {
        int low = i;
        int high = n-1;
        int result = n+1;
        while (low<=high) {
            int mid = low + (high-low)/2;
            if (jobs[mid][0]>=currJobEnd) {
                result = mid;
                high = mid-1;
            } else {
                low = mid+1;
            }
        }
        return result;
    }

    int solve(vector<vector<int>> &jobs , int i) {
        if (i>=n) 
            return 0;
        if (dp[i]!=-1) 
            return dp[i];
        
        int next = getNextIndex(jobs,i+1,jobs[i][1]);
        int taken = jobs[i][2] + solve(jobs,next);
        int notTaken = solve(jobs,i+1);
        return dp[i] = max(taken,notTaken);


    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        n = startTime.size();
        
        memset(dp,-1,sizeof(dp));
        vector<vector<int>> jobs(n, vector<int>(3,0));
        for (int i = 0; i < n; i++) {
            jobs[i][0] = startTime[i];
            jobs[i][1] = endTime[i];
            jobs[i][2] = profit[i];
        }
        auto comp = [&](auto &vec1 , auto &vec2) {
            return vec1[0]<vec2[0];
        };
        sort(begin(jobs),end(jobs),comp);
       
        return solve(jobs,0);

    }
};


