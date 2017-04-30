/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/identical-binary-tree
@Language: C++
@Datetime: 16-10-28 05:28
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
     * @aaram a, b, the root of binary trees.
     * @return true if they are identical, or false.
     */
     void doIdentical(TreeNode* a,TreeNode* b,bool &istrue){
        if((a == NULL) && (b == NULL)) return;
        if((a == NULL) || (b == NULL)){
          istrue = false;
          return;
        } 
        if(a->val!=b->val)
        {
            istrue = false;
            return;
        }
        doIdentical(a->left,b->left,istrue);
        doIdentical(a->right,b->right,istrue);
    }
    bool isIdentical(TreeNode* a, TreeNode* b) {
        // Write your code here
        bool istrue=true;
        doIdentical(a,b,istrue);
        return istrue;
        
    }
    
};