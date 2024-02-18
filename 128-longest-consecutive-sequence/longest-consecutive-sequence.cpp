class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int res = 0;
        for (int num : nums) {
            if (!s.count(num - 1)) {
                int len = 1;
                while (s.count(num + len)) {
                    len++;
                }
                res = max(res, len);
            }
        }
        return res;
    }
};
