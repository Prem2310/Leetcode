class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        // Count the frequency of each number
        for (auto i : nums) {
            mp[i]++;
        }
        
        // Create a vector of pairs to store frequency and number
        vector<pair<int, int>> freqNumPairs;
        for (auto entry : mp) {
            freqNumPairs.push_back({entry.second, entry.first});
        }
        
        // Sort the vector based on frequency in descending order
        sort(freqNumPairs.rbegin(), freqNumPairs.rend());
        
        // Extract the top k frequent numbers
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(freqNumPairs[i].second);
        }
        
        return ans;
    }
};
