class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        # count = 0
        # while (len(nums) > 0):
        #     test = set(nums)
        #     if len(test) == len(nums):
        #         return count
        #     if len(nums) > 3 :
        #         nums = nums[3:]
        #     else:
        #         nums = []

        #     count += 1
        # return count 

        seen = set()

        for i in range(len(nums)-1, -1, -1):
            if nums[i] in seen:
                return i //3 + 1
            seen.add(nums[i])
        return 0
