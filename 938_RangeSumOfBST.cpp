/***************************************************
*      FileName: 938_RangeSumOfBST.cpp
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-14 22:48:00
*      LastModified: 2019-06-14 22:52:46
****************************************************/

/*
 938. Range Sum of BST
 Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).

The binary search tree is guaranteed to have unique values.

Example 1:
Input: root = [10,5,15,3,7,null,18], L = 7, R = 15
Output: 32

Example 2:
Input: root = [10,5,15,3,7,13,18,1,null,6], L = 6, R = 10
Output: 23


Note:

The number of nodes in the tree is at most 10000.
The final answer is guaranteed to be less than 2^31.

分析：求BST的符合一定条件的节点之和
思路：前序遍历二叉树，找出符合条件的节点值累加即可。
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
    void SumBST(TreeNode* root, int *count, int L, int R)
    {
        if(root == NULL)
        {
            return;
        }

        if(root->val >= L && root->val <= R)
        {
            *count += root->val;
        }

        SumBST(root->left, count, L, R);
        SumBST(root->right, count, L, R);

    }

    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        SumBST(root, &sum, L, R);

        return sum;

    }
};
