class Solution:
    def hammingWeight(self, n: int) -> int:
        temp = str(bin(n))
        res = temp.count('1')
        return res