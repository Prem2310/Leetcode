class Solution:
    def integerBreak(self, n: int) -> int:
        if n ==2:
            res = 1
            
        elif n ==3:
            res = 2

        elif n%3 == 2:
            ans = n//3
            res = pow(3,ans) * 2
        elif n%3 == 0:
            ans = n//3
            res = pow(3,ans)
        else:
            ans = n//3
            res = pow(3,ans-1)*4
        return res
            