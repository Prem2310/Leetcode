class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        def ncr(rowIndex, r):
            res = 1
            for i in range(r):
                res *= (rowIndex-i)
                res //= (i+1)
            return int(res)
        ans = []
        for i in range(rowIndex+1):
            ans.append(ncr(rowIndex, i))
        return ans
    