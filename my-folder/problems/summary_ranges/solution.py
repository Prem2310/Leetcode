class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        result = []
        start = end = None

        for num in nums:
            if start is None:
                start = num
                end = num
            elif num == end + 1:
                end = num
            else:
                result.append(self.formatRange(start, end))
                start = num
                end = num

        if start is not None:
            result.append(self.formatRange(start, end))

        return result

    def formatRange(self, start, end):
        if start == end:
            return str(start)
        else:
            return str(start) + "->" + str(end)
