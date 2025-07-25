class Solution:
    def maxSum(self, nums: List[int]) -> int:
        valPair = {}
        sum = 0
        temp = nums[0]
        for num in nums:
            if num > 0 and num not in valPair:
                valPair[num] = 1
                sum += num
            if num > temp:
                temp = num
        if sum == 0:
            sum = temp
        return sum
