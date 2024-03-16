class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> prefixSumToIndex; 
        int currentSum = 0; 
        int maxLength = 0; 
        prefixSumToIndex[0] = -1; 

        for (int i = 0; i < nums.size(); ++i) {
            currentSum += nums[i] == 1 ? 1 : -1;

            if (prefixSumToIndex.count(currentSum)) {
                maxLength = max(maxLength, i - prefixSumToIndex[currentSum]);
            } else {
                prefixSumToIndex[currentSum] = i;
            }
        }
        return maxLength; 
    }
};
