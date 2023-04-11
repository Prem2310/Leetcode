class Solution:
    def removeStars(self, s: str) -> str:
        str1=list(s)
        list1=[]
        for i in range(len(str1)):
            if str1[i]!="*":
                list1.append(str1[i])
            if str1[i]=="*":
                list1.pop()
        res=""
        res=res.join(list1)
        return res