/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/insert-node-in-a-binary-search-tree
@Language: C++
@Datetime: 16-10-28 07:47
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
     * @param root: The root of the binary search tree.
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
    TreeNode* insertNode(TreeNode* root, TreeNode* node) {
        // write your code here
        if(root == NULL){
            root = node;
            return root;
        }
        insert(root,node);
        return root;
    }
    void insert(TreeNode* root, TreeNode* node){
        if(root == NULL){
            root = node;
            return;
        }
        if(root->val >= node->val){ 
            if(root->left==NULL) 
            {
                root->left=node;
                return;
            }
            insert(root->left,node);
        }
        if(root->val < node->val){
            if(root->right==NULL) 
            {
                root->right=node;
                return;
            }
            insert(root->right,node);
        } 
    }
    
};