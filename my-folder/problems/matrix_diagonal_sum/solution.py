class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        count=0
        for i in range(len(mat)):
            for j in range(len(mat)):
                if i==j:
                    count+=mat[i][j]
                elif i+1+j+1==len(mat)+1:
                    count+=mat[i][j]
        return count