/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/balanced-binary-tree
@Language: C++
@Datetime: 16-09-28 02:46
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
     * @return: True if this Binary tree is Balanced, or false.
     */
    bool flag=true;
    bool isBalanced(TreeNode *root) {
        // write your code here
   
        if(!root ){
            return flag;
        }else{
            if((TreeHeight(root->left)-TreeHeight(root->right)<-1)){
                
                flag=false;return flag;
                }
            if((TreeHeight(root->left)-TreeHeight(root->right)>1)){
                flag=false;
                return flag;
            }
            else{
            isBalanced(root->left);
            isBalanced(root->right);
            }
        }
        
    }
    int TreeHeight(TreeNode *root)
    {
   int i,j;
	if(!root)
	    return 0;
	else
	{
	i=TreeHeight(root->left);
	j=TreeHeight(root->right);
	if(i>j)
		return i+1;
	else
	return j+1;
	}
    }
};