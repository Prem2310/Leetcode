class Solution:
    def countPairs(self, nums: List[int], k: int) -> int:
        count = 0
        index_map = defaultdict(list)

        for i in range(len(nums)):
            for j in index_map[nums[i]]:
                if ((i*j) %k == 0):
                    count += 1
            index_map[nums[i]].append(i)

        return count
