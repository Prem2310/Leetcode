class Solution:
    def countBits(self, n: int) -> List[int]:
        if n==0:
            return [0]
        bit= [0]
        for i in range(1,n+1):
            m = int(log2(i))
            bit.append(bit[i-(2**(m))]+1)
        return bit
