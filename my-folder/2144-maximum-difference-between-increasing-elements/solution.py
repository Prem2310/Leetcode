class Solution:
  def maximumDifference(self, nums: list[int]) -> int:
    res = -1
    mini = nums[0]

    for i in range(len(nums)):
      if nums[i] > mini:
        res = max(res, nums[i] - mini)
      mini = min(mini, nums[i])
    return res
