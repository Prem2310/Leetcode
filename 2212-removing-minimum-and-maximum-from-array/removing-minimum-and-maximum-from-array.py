class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        minIdx = nums.index(min(nums))
        maxIdx = nums.index(max(nums))
        l = min(minIdx, maxIdx)
        r = max(minIdx, maxIdx)
        n = len(nums)

        return min(
            r+1, n-l, l+1+n-r
        )
        