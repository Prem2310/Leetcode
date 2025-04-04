# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def lcaDeepestLeaves(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root:
            return None
        
        self.candidate = None
        self.maxDepth = -1

        self.dfs(root, 0)

        return self.candidate
    
    def dfs(self, node, depth):
        if not node:
            return -1
        
        if not node.left and not node.right:
            if depth > self.maxDepth:
                self.candidate = node
                self.maxDepth = depth
            return depth

        l_depth = self.dfs(node.left, depth+1)
        r_depth = self.dfs(node.right, depth+1)

        if l_depth == r_depth == self.maxDepth:
            self.candidate = node

        return max(l_depth, r_depth) 

        
