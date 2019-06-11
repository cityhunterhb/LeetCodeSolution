/***************************************************
*      FileName: 872_LeafSimilarTrees.c
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-10 07:40:02
*      LastModified: 2019-06-11 20:41:17
****************************************************/

/*
 872.Leaf-Similar Trees

分析：比较2棵二叉树的叶节点是否完全相同
思路：分两步。
	1.递归法求解叶节点。分别求出两棵二叉树的叶节点的序列。
	2.比较两个数组是否完全相同。包含数组的元素个数和元素排列的序列是否一一对应。
	3.时间复杂度和空间复杂度为O(N1+N2)。
 * */


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void GetLeafNum(struct TreeNode* root, int leaf[])
{
    if(root == NULL)
    {
        return;
    }

    if(root->left == NULL && root->right == NULL)
    {
        leaf[0]++;
        leaf[leaf[0]] = root->val;
    }

    GetLeafNum(root->left, leaf);
    GetLeafNum(root->right, leaf);

bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2){
    int leaf1[100] = {0};
    int leaf2[100] = {0};

    GetLeafNum(root1, leaf1);
    GetLeafNum(root2, leaf2);

    if(leaf1[0] == leaf2[0])
    {
        for(int i=0; i<=leaf1[0]; i++)
        {
            if(leaf1[i] != leaf2[i])
            {
                return false;
            }
        }

		return true;
    }

    return false;
}


