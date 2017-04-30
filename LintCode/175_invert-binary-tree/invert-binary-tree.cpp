/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/invert-binary-tree
@Language: C++
@Datetime: 16-11-04 01:56
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
     * @param root: a TreeNode, the root of the binary tree
     * @return: nothing
     */
    void invertBinaryTree(TreeNode *root) {
        // write your code here
        if(root!=NULL){
            MyInvert(root);
        }
        
    }
    void MyInvert(TreeNode *root){
        if(root==NULL) return;
        else{
        TreeNode *temp;
        temp=root->left;
        root->left=root->right;
        root->right=temp;
        }
        MyInvert(root->left);
        MyInvert(root->right);
    }
    
};