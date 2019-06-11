/***************************************************
*      FileName: 700_SearchInBST.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-11 08:01:29
*      LastModified: 2019-06-11 08:04:16
****************************************************/
/*
 700. Search in a Binary Search Tree
 分析：在二叉树中搜索节点，如果不存在就返回NULL，如果存在就返回以该节点为根节点的子树
 思路：递归法。比较目标数值和根节点的数值，如果比根节点大，则在树的右子树搜索，如果比根节点小，则在树的左子树搜索；如果相等，直接返回当前节点。
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* searchBST(struct TreeNode* root, int val){
    if(root == NULL)
    {
        return NULL;
    }

    if(root->val == val)
    {
        return root;
    }

    if(root->val > val)
        return searchBST(root->left, val);
    else if(root->val < val)
        return searchBST(root->right, val);
    else
        return root;

    return NULL;
}



