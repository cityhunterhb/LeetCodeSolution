/***************************************************
*      FileName: 94_InorderTree.cpp
*      Author&website:  cityhunterhb.top
*      Mail:  cityhunterhb.top@gmail.com
*      Description: ---
*      CreatedTime: 2019-06-19 16:02:26
*      LastModified: 2019-06-19 16:02:32
****************************************************/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution{
public:
    vector<int> inorderTraversal(TreeNode* root){
        vector<int> res;
        if(root == NULL) return res;
        stack<TreeNode*> stk;
        stk.push(root);
        while(!stk.empty())
        {
            TreeNode* node = stk.top();
            if(node->left != NULL)
            {
                stk.push(node->left);
                node->left = NULL;
                continue;
            }

            res.push_back(node->val);
            stk.pop();
            if(node->right != NULL)
                stk.push(node->right);
        }
        return res;
    }
};
