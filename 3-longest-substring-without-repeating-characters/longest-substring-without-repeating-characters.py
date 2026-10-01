class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        lastSeen = {}
        l = 0
        best = 0

        for r, ch in enumerate(s):
            if ch in lastSeen and lastSeen[ch] >= l:
                l = lastSeen[ch] + 1
            lastSeen[ch] = r
            best = max(best, r-l+1)
        return best