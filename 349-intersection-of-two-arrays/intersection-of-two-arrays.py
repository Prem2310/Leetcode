def intersection(list1 : List[int] , list2 : List[int]) -> List[int]:
    return list(set(list1) & set(list2))
class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        return intersection(nums1,nums2)