class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ans = []
        nums.sort()

        for i in range(len(nums)-2):
            if (i==0 or (i>0 and nums[i] != nums[i-1])):
                target = -nums[i]
                l = i+1
                r = len(nums) - 1

                while(l < r ):
                    curr = nums[l] + nums[r]
                    if(curr == target):
                        ans.append([nums[i],nums[l],nums[r]])
                        while(l<r and nums[l]==nums[l+1]): l += 1
                        while(l<r and nums[r]==nums[r-1]): r -= 1
                        l += 1
                        r -= 1
                    elif (curr > target):
                        r -= 1
                    else:
                        l += 1

        return ans