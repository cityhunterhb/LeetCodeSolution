/***************************************************
*      FileName: 783_MinDistanceOfBST.cpp
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-18 08:14:28
*      LastModified: 2019-06-18 08:17:17
****************************************************/
/*
 783. Minimum Distance Between BST Nodes
 Given a Binary Search Tree (BST) with the root node root, return the minimum difference between the values of any two different nodes in the tree.

Example :

Input: root = [4,2,6,1,3,null,null]
Output: 1
Explanation:
Note that root is a TreeNode object, not an array.

The given tree [4,2,6,1,3,null,null] is represented by the following diagram:

          4
        /   \
      2      6
     / \
    1   3

while the minimum difference in this tree is 1, it occurs between node 1 and node 2, also between node 3 and node 2.
Note:

The size of the BST will be between 2 and 100.
The BST is always valid, each node's value is an integer, and each node's value is different.
分析：递归法，分别求左右节点与根节点的最小值，然后比较得出最后的最小值。


 * */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
*/
class Solution {
public:
    int min_;

    int minDiffInBST(TreeNode* root) {
        min_ = INT_MAX;
        dfs(root);
        return min_;
    }

    void dfs(TreeNode* n) {
        if (!n) return ;
        if (n->left) {
            int val = Rval(n->left);
            min_ = min(min_, n->val - val);
        }
        if (n->right) {
            int val = Lval(n->right);
            min_ = min(min_, val - n->val);
        }
        dfs(n->left);
        dfs(n->right);
    }

    int Lval(TreeNode* n) {
        int val = 0;
        for (; n; n = n->left) val = n->val;
        return val;
    }

    int Rval(TreeNode* n) {
        int val = 0;
        for (; n; n = n->right) val = n->val;
        return val;
    }
};
