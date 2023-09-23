class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        arr = []
        def ncr(numRows,r):
            res = 1
            for i in range(r):
                res *= (numRows-i)
                res //= (i+1)
            return int(res)

        for row in range(1,numRows+1):
            templist = []
            for col in range(1,row+1):
                templist.append(ncr(row-1,col-1))
            arr.append(templist)
        return arr
