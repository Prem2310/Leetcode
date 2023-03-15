class Solution:
   def isPalindrome(self, x: int) -> bool:
        if x >= 2**31-1 or x <= -2**31:
            return 0
        else:
            strg = str(x)
            if strg[0] == '-':
                return False
            y = strg[::-1]
            z = int(y)
            if z == x:
                return True
            else:
                return False
