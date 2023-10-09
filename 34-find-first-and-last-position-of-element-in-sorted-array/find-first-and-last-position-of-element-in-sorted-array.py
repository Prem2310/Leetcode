class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        if not nums:
            return [-1,-1]
        if len(nums)==1:
            if nums[0]==target:
                return [0,0]
            else:
                return [-1,-1]
 
        def findleft(nums,target):
            l=0
            r=len(nums)-1
            while l<=r:
                mid=(l+r)//2
                if nums[mid]==target:
                    if mid==0 or nums[mid-1]!=target:
                        return mid
                    else:
                        r=mid-1
                elif nums[mid]>target:
                    r=mid-1
                else:
                    l=mid+1
            return -1
        def findright(nums,target):
            l=0
            r=len(nums)-1
            while l<=r:
                mid=(l+r)//2
                if nums[mid]==target:
                    if mid==len(nums)-1 or nums[mid+1]!=target:
                        return mid
                    else:
                        l=mid+1
                elif nums[mid]>target:
                    r=mid-1
                else:
                    l=mid+1
            return -1
        left=findleft(nums,target)
        right=findright(nums,target)
        return [left,right]