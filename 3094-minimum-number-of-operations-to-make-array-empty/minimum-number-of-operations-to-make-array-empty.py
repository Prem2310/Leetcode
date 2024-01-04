class Solution:
    def minOperations(self, nums: List[int]) -> int:
        hashMap = {}
        for i in nums:
            if i in hashMap:
                hashMap[i] += 1
            else:
                hashMap[i] = 1
        count = 0
        val = list(hashMap.values())
        for i in range(len(val)):
            if val[i] == 1:
                return -1
            elif val[i]% 3 ==0:
                count += val[i]//3
            else:
                if val[i] % 3 == 1:
                    count += (val[i]-4)//3
                    count += 2
                else:
                    count += (val[i]-2)//3
                    count += 1
                    
        return count
    