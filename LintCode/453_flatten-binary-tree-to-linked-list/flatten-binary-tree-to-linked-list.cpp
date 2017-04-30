/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/flatten-binary-tree-to-linked-list
@Language: C++
@Datetime: 16-11-15 09:01
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
    void flatten(TreeNode *root) {
// main function    
// this is not my code
    if(root == NULL)
        return;
    ConvertToLink(root);
}


TreeNode* ConvertToLink(TreeNode* root) // utility function
{// return value is the tail of the linked list
    if(root==NULL)
        return NULL;

    TreeNode* leftLinkTail = ConvertToLink(root->left); // tail of left linked list
    TreeNode* rightLinkTail = ConvertToLink(root->right); // tail of right linked list
    
    if(leftLinkTail != NULL)
    {
        leftLinkTail->right = root->right;
        root->right = root->left;
    }
    
    root->left = NULL;

    if(rightLinkTail!= NULL)
        return rightLinkTail;
    else if(leftLinkTail != NULL)
        return leftLinkTail;
    else
        return root;
}

};