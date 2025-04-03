class Solution {
 public:
    long long maximumTripletValue(vector<int>& nums) {
        long res = 0;
        int maxDiff = 0;
        int maxNum = 0;

        for (const int num : nums) {
        res = max(res, static_cast<long>(maxDiff) * num);
        maxDiff = max(maxDiff, maxNum - num);
        maxNum = max(maxNum, num);
        }

        return res;
    }
};
