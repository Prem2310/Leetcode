class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        if len(intervals) <= 1:
            return intervals
        intervals.sort(key=lambda x:x[0])

        def merge_helper(index: int, merge:List[List[int]]) -> List[List[int]]:
            if index == len(intervals):
                return merge
            curr = intervals[index]

            if not merge or merge[-1][1] < curr[0]:
                merge.append(curr)
            else:
                merge[-1][1] = max(merge[-1][1], curr[1])
            return merge_helper(index + 1,merge)
        
        return merge_helper(0,[])

