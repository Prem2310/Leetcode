from collections import defaultdict
class Solution:
    def maxNumberOfFamilies(self, n: int, reservedSeats: List[List[int]]) -> int:
        reservedByRow = defaultdict(int)

        for row, seat in reservedSeats:
            reservedByRow[row] |= 1 << (10-seat)
        
        familyGroupMasks = (0b0111100000, 0b0001111000, 0b0000011110)

        totalFamilies = (n - len(reservedByRow)) * 2

        for rowMasks in reservedByRow.values():
            for mask in familyGroupMasks:
                if (rowMasks & mask) == 0:
                    rowMasks |= mask
                    totalFamilies += 1
        
        return totalFamilies