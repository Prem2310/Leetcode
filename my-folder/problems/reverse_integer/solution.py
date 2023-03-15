class Solution:
   def reverse(self, x: int) -> int:
    if x >= 2**31-1 or x <= -2**31:
        return 0
    else:
        strg = str(x)
        if x >= 0:
            revst = strg[::-1]
        else:
            temp = strg[1::]
            temp2 = temp[::-1]
            revst = "-" + temp2
        y = int(revst)

    if y >= 2**31-1 or y <= -2**31:
        return 0
    else:
        return y