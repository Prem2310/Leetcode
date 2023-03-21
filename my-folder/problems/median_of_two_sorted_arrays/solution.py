class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        num=nums1+nums2
        num.sort()
        n = len(num)
        x = (n-1)//2
        if n % 2 ==0:
            return (num[x]+num[x+1])/2
        else:
            return num[x]
