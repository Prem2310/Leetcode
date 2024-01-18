class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int curr = 0;
        unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); i++) {
            curr = target - nums[i];
            if (hashMap.find(curr) != hashMap.end()) {
                return {hashMap[curr], i};
            } else {
                hashMap[nums[i]] = i;
            }
        }
        // Return an empty vector if no solution is found
        return {};
    }
};
