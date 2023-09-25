class Solution:
    def findTheDifference(self, s: str, t: str):
        for i in range(len(t)):
            if t[i] not in s:
                return t[i]
            else:
                s = s.replace(t[i], "", 1)
        return ""
