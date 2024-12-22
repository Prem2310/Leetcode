class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        list1 = []
        list2 = []
        for num in nums:
            if num < 0:
                list2.append(num)
            else:
                list1.append(num)
        list1.reverse()
        list2.reverse()
        for i in range(0,len(nums),2):
            nums[i] = list1.pop()
            nums[i+1] = list2.pop()
        return nums