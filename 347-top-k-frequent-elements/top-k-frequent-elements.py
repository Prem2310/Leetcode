class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq_map = Counter(nums)
        sorted_elements = sorted(freq_map.items(), key=lambda item: item[1], reverse=True)

        return [item[0] for item in sorted_elements[:k]]