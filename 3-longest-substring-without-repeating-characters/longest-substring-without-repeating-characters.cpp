class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, maxLen = 0;
        unordered_map<char, int> window;
        while (end < s.size()) {
            char c = s[end];
            window[c]++;
            end++;
            while (window[c] > 1) {
                char d = s[start];
                window[d]--;
                start++;
            }
            maxLen = max(maxLen, end - start);
        }
        return maxLen;
        
    }
};