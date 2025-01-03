class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        ans = ""

        opened = 0

        for c in s:
            if c == '(':
                opened += 1
                if (opened > 1):
                    ans += c
            else:
                opened -= 1
                if (opened > 0):
                    ans += c
        return ans