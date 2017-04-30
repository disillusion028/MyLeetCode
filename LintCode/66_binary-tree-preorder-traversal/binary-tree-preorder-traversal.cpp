/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/binary-tree-preorder-traversal
@Language: C++
@Datetime: 16-10-02 09:11
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
     * @return: Preorder in vector which contains node values.
     */

    vector<int> preorderTraversal(TreeNode *root) {
        // write your code here
        vector<int> p;
        if(root==NULL) return p;
        preorder(root,p);
        return p;
        
    }

    void preorder(TreeNode *root,vector<int> &ret){
         ret.push_back(root->val);
        if (root->left != NULL)
        {
            preorder(root->left, ret);
        }
       
        if (root->right != NULL)
        {
            preorder(root->right, ret);
        }
        return;
    }
};
