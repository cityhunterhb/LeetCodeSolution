/***************************************************
*      FileName: 104_MaxdepthofBinaryTree.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-05-12 06:32:02
*      LastModified: 2019-05-12 06:40:35
****************************************************/

/*
	104. Maximum Depth of Binary Tree
Given a binary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
Note: A leaf is a node with no children.

Example:
Given binary tree [3,9,20,null,null,15,7],
   3
  / \
 9  20
   /  \
 15    7
 return it's depth = 3.
 */

/*
 分析：求二叉树额最大深度
 方法：采用递归的方式，先给出递归基（即递归的停止条件），再递归求解左子树和右子树
	   1.当树为空的时候，高度为0
	   2.当树的左子树和右子树同时为空的时候，即树只有一个根节点时，树的高度为1
	   3.分别递归的求解树的左子树和右子树的高度，取二者中间的较大值，即为全树的最大高度
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if(root == NULL)
    {
        return 0;
    }
    if(root->left == NULL && root->right ==NULL)
    {
        return 1;
    }

    int leftdepth = maxDepth(root->left);
    int rightdepth = maxDepth(root->right);

    return 1 + (leftdepth > rightdepth ? leftdepth : rightdepth);
}



