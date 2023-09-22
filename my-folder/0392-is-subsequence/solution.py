class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        j = 0
        if len(s) > len(t):
            return False
        if len(s) == 0:
            return True
        else:
            for i in range(len(t)):
                if s[j] == t[i]:
                    j += 1       
                if j == len(s):
                    return True
        return False  # Add this line to handle the case where s is not a subsequence of t

