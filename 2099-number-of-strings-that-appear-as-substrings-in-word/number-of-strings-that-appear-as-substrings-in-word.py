class Solution:
    def numOfStrings(self, patterns: List[str], word: str) -> int:
        cnt = 0
        for c in patterns:
            if c in word:
                cnt += 1

        return cnt