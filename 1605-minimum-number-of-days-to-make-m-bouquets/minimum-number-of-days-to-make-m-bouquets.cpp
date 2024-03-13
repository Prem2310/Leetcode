class Solution {
public:
    bool check(vector<int> &bloomDay, int mid, int k, int m) {
        int consecutive = 0;
        int bouquets = 0;
        for (int j : bloomDay) {
            if (j <= mid) {
                consecutive++;
                if (consecutive == k) {
                    bouquets++;
                    consecutive = 0;
                }
            } else {
                consecutive = 0;
            }
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long temp = static_cast<long long>(m) * k;
        if (static_cast<long long>(n) < temp) 
            return -1;

        long long mini = *min_element(bloomDay.begin(), bloomDay.end());
        long long maxi = *max_element(bloomDay.begin(), bloomDay.end());

        long long l = mini, r = maxi;

        while (l < r) {
            long long mid = l + (r - l) / 2;
            if (check(bloomDay, mid, k, m)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};
