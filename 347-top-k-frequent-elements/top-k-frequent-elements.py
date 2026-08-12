from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freqCount = Counter(nums)
        return [key for key, value in freqCount.most_common(k)]
