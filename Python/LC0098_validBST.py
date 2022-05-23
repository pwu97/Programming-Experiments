# Given the root of a binary tree, determine if it is a valid 
# binary search tree (BST).
#
# A valid BST is defined as follows:
#
# - The left subtree of a node contains only nodes with keys 
# less than the node's key.
# - The right subtree of a node contains only nodes with keys 
# greater than the node's key.
# - Both the left and right subtrees must also be binary
# search trees.

# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        return self.isValidBSTHelper(root, float("-inf"), float("inf"))
    
    def isValidBSTHelper(self, root, lower, upper):
        if not root:
            return True
        val = root.val
        if ((val > lower) and (val < upper)) and self.isValidBSTHelper(root.left, lower, val) and self.isValidBSTHelper(root.right, val, upper):
            return True
        return False
    
root = TreeNode(2)
root.left = TreeNode(1)
root.right = TreeNode(3)
#     2
#    / \
#   1   3
print(Solution().isValidBST(root))
# True

root = TreeNode(5)
root.left = TreeNode(1)
root.right = TreeNode(4)
root.right.left = TreeNode(3)
root.right.right = TreeNode(6)
#     5
#    / \
#   1   4
#      / \
#     3   6
print(Solution().isValidBST(root))
# False

root = TreeNode(5)
root.left = TreeNode(1)
root.right = TreeNode(7)
root.right.left = TreeNode(4)
#     5
#    / \
#   1   7
#      / 
#     4
print(Solution().isValidBST(root))
# False
    
    
    
    
        
        
        