
class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        count = Counter(nums)
        cond = len(nums) / 3
        return[ans for ans in count if count[ans] > cond]


        
