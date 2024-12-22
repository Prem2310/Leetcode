class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        m = s.strip()
        l = m.split(" ")
        return len(l[-1])