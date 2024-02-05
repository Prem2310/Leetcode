class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        
        // Count occurrences of each character
        for (char c : s) {
            mp[c]++;
        }
        
        // Find the first unique character
        for (int i = 0; i < s.length(); i++) {
            if (mp[s[i]] == 1) {
                return i;
            }
        }
        
        return -1; // If no unique character found
    }
};
