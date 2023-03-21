class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        count = 0
        total = 0
        for i in range(len(nums)):
            if nums[i]==0:
                count += 1
            elif nums[i]!= 0:
                total += (count * (count+1))/2
                count = 0
        total += (count * (count+1))/2
        return int(total)