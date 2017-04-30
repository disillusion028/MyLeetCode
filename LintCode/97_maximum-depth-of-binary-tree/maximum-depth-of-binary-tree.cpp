/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/maximum-depth-of-binary-tree
@Language: C++
@Datetime: 16-11-04 09:06
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
     * @param root: The root of binary tree.
     * @return: An integer
     */
    int maxDepth(TreeNode *root) {
        // write your code here
        int i,j;
        if(root==NULL){
            return 0;
        }
        else {
            i=maxDepth(root->left);
            j=maxDepth(root->right);
            if(i>j)
            return i+1;
            else return j+1;
        }
    }
};