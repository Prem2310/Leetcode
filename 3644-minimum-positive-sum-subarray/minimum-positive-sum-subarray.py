class Solution:
    def minimumSumSubarray(self, nums: List[int], l: int, r: int) -> int:
        n = len(nums)
        minPositiveSum = float('inf')

        for length in range(l , r + 1):
            windowSum = sum(nums[:length])

            if windowSum > 0:
                minPositiveSum = min(minPositiveSum , windowSum)
            
            for i in range(length , n):
                windowSum += nums[i] - nums[i - length]
                if windowSum > 0:
                    minPositiveSum = min(minPositiveSum , windowSum)

        return  minPositiveSum if (minPositiveSum != float('inf')) else -1