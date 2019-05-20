/*
701. Insert into a Binary Search Tree

Given the root node of a binary search tree (BST) and a value to be inserted into the tree, insert the value into the BST. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.
Note that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.

分析：往二叉搜索树中插入新节点，新节点的数值和二叉树原有节点的数不相等。
思路：递归方法。
      1.确定递归基。当节点为NULL时，申请内存，将该节点插入新申请的位置上；
      2.比较插入的值与树的根节点的值，如果大于根节点，则新节点插入根节点的右子树，右子树递归调用插入函数；否则递归插入左子树。
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* insertIntoBST(struct TreeNode* root, int val){
    if(root == NULL)
    {
        struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        node->val = val;
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    
    if(root->val > val)
    {
        root->left = insertIntoBST(root->left, val);
    }
    else
    {
        root->right = insertIntoBST(root->right, val);
    }
    
    return root;
}
