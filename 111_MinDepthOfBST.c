/***************************************************
*      FileName: 111_MinDepthOfBST.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-05-26 08:18:17
*      LastModified: 2019-05-26 08:22:53
****************************************************/

/*
 题目：求二叉树的最小深度
 分析：递归法
		1.参考求二叉树的最大深度，先定义递归结束条件，再递归求解根的左子树和右子树。
		2.递归基。假设为空树，最小深度为0；如果左子树为空，则最小深度为右子树的深度；如果右子树为空，则树的最小深度为左子树的最小深度；如果左子树和右子树都存在，则返回二者中的较小值。
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    if(root == NULL)
    {
        return 0;
    }


    int l = minDepth(root->left);
    int r = minDepth(root->right);

    if(l == 0)
    {
        return 1 + r;
    }
    else if(r == 0)
    {
        return 1 + l;
    }
    else
    {
        return 1 + (l < r ? l : r);
    }

}



