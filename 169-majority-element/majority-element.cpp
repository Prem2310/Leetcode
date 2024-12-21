class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int num : nums) {  // Use 'num' instead of 'n' to avoid confusion
            mp[num] += 1;
            if (mp[num] > n / 2) {  // Compare with 'n / 2' instead of 'num / 2'
                return num;
            }
        }
        return -1;  // This line is just for safety; by problem constraints, a majority element always exists.
    }
};
