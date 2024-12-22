class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        n = len(nums)
        i = n-2
        while(i >= 0):
            if nums[i] < nums[i + 1]:
                break
            i -= 1
        
        
        if i >= 0:       
            for j in range(n - 1, i, -1):
                if nums[j] > nums[i]:
                    nums[i], nums[j] = nums[j], nums[i]
                    break
        
        
        nums[i + 1:] = reversed(nums[i + 1:])
