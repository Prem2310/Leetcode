class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        nums.sort()
        res,count=0,0
        for i in range(1,len(nums)):
            if nums[i-1]==nums[i]:
                count+=1
                res+=count
            else:
                count=0
        return res
