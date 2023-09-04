class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n == 0:
            return 1
        elif n > 0:
            ans = pow(x,n)
        elif n< 0:
            ans = pow(x,n)
        return ans
