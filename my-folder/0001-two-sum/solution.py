class Solution:
    def twoSum(self, num: List[int], target: int) -> List[int]:
            # savedNumber = []
            # for i in range(len(num)):
            #     if(target - num[i] in savedNumber):
            #         return [i,savedNumber.index(target-num[i])]
            # return 0
            curr = 0
            hashMap = {}
            for i in range(len(num)):
                curr = target - num[i]
                if curr in hashMap.keys():
                    return (hashMap[curr],i)
                else:
                    hashMap[num[i]] = i
