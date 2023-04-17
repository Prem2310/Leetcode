class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maxNum = max(candies)
        solArr = []
        for candy in candies:
            if(candy + extraCandies >= maxNum):
                solArr.append(True)
            else:
                solArr.append(False)
        return solArr
