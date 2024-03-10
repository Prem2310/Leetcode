def intersection(lst1: List[int], lst2: List[int]) -> List[int]:
    return list(set(lst1) & set(lst2))

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        return intersection(nums1, nums2)