/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/binary-tree-inorder-traversal
@Language: C++
@Datetime: 16-10-02 09:01
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
    /**
     * @param root: The root of binary tree.
     * @return: Inorder in vector which contains node values.
     */
      
public:
    vector<int> inorderTraversal(TreeNode *root) {
        // write your code here
        vector<int> p;
        if(root==NULL) return p;
        inorder(root,p);
        return p;
        
    }

    void inorder(TreeNode *root,vector<int> &ret){
        if (root->left != NULL)
        {
            inorder(root->left, ret);
        }
        ret.push_back(root->val);
        if (root->right != NULL)
        {
            inorder(root->right, ret);
        }
        return;
    }
};