class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numMap = {}
        for i in range(len(nums)):
            curr = target - nums[i]
            if curr in numMap:
                return [i,numMap[curr]]
            numMap[nums[i]] = i            

        return -1