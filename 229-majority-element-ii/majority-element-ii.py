class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        map = {}
        ans = []
        n = len(nums)
        for num in nums:
            if num not in map:
                map[num] = 1
            else:
                map[num] += 1

        for num in map:
            if map[num] > (n/3):
                ans.append(num)
        return ans