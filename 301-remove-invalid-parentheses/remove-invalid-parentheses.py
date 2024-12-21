class Solution:
    def removeInvalidParentheses(self, s: str) -> List[str]:
        def dfs(index:int , left:int , right:int , currLeft :int , currRight:int ,path:str):
            if index == length:
                if left == 0  and right == 0:
                    validExpression.add(path)
                return 

            if length - index < left + right or currLeft < currRight:
                return
            
            if s[index] == "(" and left > 0:
                dfs(index+1 , left-1 , right , currLeft , currRight , path)
             
            elif s[index] == ")" and right > 0:
                dfs(index+1 , left , right - 1 , currLeft , currRight , path)

            dfs(index + 1 , left , right ,currLeft + (s[index] == "(") , currRight + (s[index] == ")") , path + s[index])
     
     
        #initail count
        left , right = 0,0

        for c in s:
            if c == "(":
                left +=1
            elif c == ')':
                if left:
                    left -=1
                else: 
                    right +=1

        validExpression = set()
        length = len(s)

        dfs(0,left,right,0,0,'')

        return list(validExpression)
