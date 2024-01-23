class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        unordered_map<int, int> freq;
        
        for (int i = 0; i < nums.size(); ++i) {
            freq[nums[i]]++;
        }
        
        for (auto& entry : freq) {
            if (entry.second == 1) {
                return entry.first;
            }
        }
        
        return 0;
    }
};
