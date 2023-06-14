# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        def inorder(node):
            nonlocal prev, min_diff
            if node is None:
                return

            inorder(node.left)

            if prev is not None:
                abs_diff = abs(node.val - prev)
                min_diff = min(min_diff, abs_diff)

            prev = node.val

            inorder(node.right)

        prev = None
        min_diff = float('inf')

        inorder(root)

        return min_diff