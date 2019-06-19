#!/usr/bin/python
#_*_ coding: UTF-8 _*_
#****************************************************
#      FileName: 230_KthSmallestElemInBST.py
#      Author:  cityhunterhb.top
#      mail:  cityhunterhb.top@gmail.com
#      Description: ---
#      CreatedTime: 2019-06-19 08:43:13
#      LastModified: 2019-06-19 08:43:27
#****************************************************


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def kthSmallest(self, root: TreeNode, k: int) -> int:
        '''
        def inorder(r):
            return inorder(r.left) + [r.val] + inorder(r.right) if r else []
        return inorder(root)[k-1]
        '''

        stack = []

        while True:
            while root:
                stack.append(root)
                root = root.left
            root = stack.pop()
            k -= 1
            if not k:
                return root.val
            root = root.right

