/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/binary-tree-postorder-traversal
@Language: C++
@Datetime: 16-10-08 08:48
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
     * @return: Postorder in vector which contains node values.
     */
public:
    vector<int> postorderTraversal(TreeNode *root) {
        // write your code here
           vector<int> p;
        if(root==NULL) return p;
        postorder(root,p);
        return p;
        
    }

    void postorder(TreeNode *root,vector<int> &ret){
        if (root->left != NULL)
        {
            postorder(root->left, ret);
        }
       
        if (root->right != NULL)
        {
            postorder(root->right, ret);
        }
        ret.push_back(root->val);
        return;
    }
};