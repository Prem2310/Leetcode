class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        map = defaultdict(int)
        n = len(nums)
        preSum = 0
        cnt = 0

        map[0] = 1
        for i in range(n):
            preSum += nums[i]

            remove = preSum - k

            cnt += map[remove]

            map[preSum] += 1
        
        return cnt

