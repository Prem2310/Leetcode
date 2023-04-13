class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:    
        stack1 = []
        i = 0
        for x in pushed:
            stack1.append(x)
            while stack1 and stack1[-1] == popped[i]:
                stack1.pop()
                i += 1
        if stack1:
            return False
        else:
            return True
