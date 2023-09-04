 
class Solution:
    def countGoodNumbers(self, n: int) -> int:
        def bipower(self,a,b):
            res = 1
            while b:
                if b&1:
                    res = res*a% mod
                a = a*a% mod
                b >>= 1

            return res
        
        mod = 10**9 + 7
        if n == 0:
            return 1
        elif n % 2 == 0:
            count = n // 2
            ans =( bipower(self,5,count) * bipower(self,4,count) )% mod
        else:
            count = n // 2
            ans = ( bipower(self,5,count+1) * bipower(self,4,count) )% mod
        return ans
