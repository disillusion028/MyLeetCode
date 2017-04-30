/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/subtree
@Language: C++
@Datetime: 16-12-07 03:00
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
     * @param T1, T2: The roots of binary tree.
     * @return: True if T2 is a subtree of T1, or false.
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
        bool istrue=true;
        doIdentical(a,b,istrue);
        return istrue;
        
    }
    bool isSubtree(TreeNode *T1, TreeNode *T2) {
        // write your code here
        if(T2==NULL)return true;
        bool istrue2=false;
        dosubtree(T1,T2,istrue2);
        return istrue2;
    }
    void dosubtree(TreeNode *T1,TreeNode *T2,bool &istrue2){
        if(T1==NULL)return;
        if(isIdentical(T1,T2)==true){
            istrue2=true;
            return;
        }
        dosubtree(T1->left,T2,istrue2);
        dosubtree(T1->right,T2,istrue2);
    }
};