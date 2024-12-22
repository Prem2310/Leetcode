class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1:
            return nums[0]
        elif nums[0] != nums[1]:
            return nums[0]
        elif nums[n-1] != nums[n-2]:
            return nums[n-1]

        left , right = 0 , n-1

        while(left <= right):
            mid = (left + right) //2
            if (mid%2 != 0): mid -= 1
            if (nums[mid] != nums[mid+1]): right = mid - 1
            else:
                left = mid + 2 
        return nums[left]
