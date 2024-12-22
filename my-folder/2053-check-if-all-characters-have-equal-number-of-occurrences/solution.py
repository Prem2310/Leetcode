class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        d = {}

        for char in s:
            if char not in d:
                d[char] = s.count(char)
        r = d[s[0]]

        for i in d:
            if d[i] != r:
                return False
        return True

