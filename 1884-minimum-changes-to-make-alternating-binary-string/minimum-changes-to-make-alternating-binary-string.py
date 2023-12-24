class Solution:
    def minOperations(self, s: str) -> int:
        # Initialize counts for starting with '0' and '1'
        count_start_0 = 0
        count_start_1 = 0
        
        # Calculate counts for both starting characters
        for i in range(len(s)):
            # Check for '0' or '1' based on index parity
            if i % 2 == 0:
                if s[i] != '0':
                    count_start_0 += 1
                else:
                    count_start_1 += 1
            else:
                if s[i] != '1':
                    count_start_0 += 1
                else:
                    count_start_1 += 1
        
        # Return the minimum count of operations needed
        return min(count_start_0, count_start_1)
