class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        length = len(stones)-1
        while(length > 0):
            stones.sort()
            if (stones[length] == stones[length-1]):
                stones.pop()
                stones.pop()
                length -=2
            else:
                diff = stones[length] - stones[length-1]
                stones.pop()
                stones.pop()
                stones.append(diff)
                length-=1
        if len(stones)==0:
            return 0
        return stones[0]
