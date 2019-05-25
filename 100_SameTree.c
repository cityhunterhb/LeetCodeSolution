/***************************************************
*      FileName: 100_SameTree.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-05-25 08:56:50
*      LastModified: 2019-05-25 08:59:44
****************************************************/


/*
 判断两棵二叉树是否是同一棵树
 思路：使用递归法。
		1.如果两棵树都是空树，则二者相同
		2.如果其中有一棵为空树，则二者不相等。
		3.递归的对每棵树的左子树和右子树进行比较
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(p == NULL && q == NULL)
    {
        return true;
    }

    if(p == NULL || q == NULL)
    {
        return false;
    }

    return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}



