/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/clone-binary-tree
@Language: C++
@Datetime: 16-11-07 02:18
*/

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param root: The root of binary tree
     * @return root of new tree
     */
    TreeNode* cloneTree(TreeNode *root) {
        // Write your code here
         if(root==NULL){
            return NULL;
        }
        else{
            TreeNode *res=(TreeNode*)malloc(sizeof(TreeNode));
            res->val=root->val;
            res->left=cloneTree(root->left);
            res->right=cloneTree(root->right);
            return res;
        }
    }
};
