/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/convert-sorted-array-to-binary-search-tree-with-minimal-height
@Language: C++
@Datetime: 16-12-01 15:53
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
     * @param A: A sorted (increasing order) array
     * @return: A tree node
     */
    TreeNode *sortedArrayToBST(vector<int> &A) {
        // write your code here
        if(A.empty())return NULL;
        
        TreeNode *X=new TreeNode(A[(A.size()-1)/2]);
        X->left=func(A,0,(A.size()-1)/2-1);
        X->right=func(A,(A.size()-1)/2+1,A.size()-1);
        return X;
    }
    TreeNode* func(vector<int> &A,int begin,int end)
    {
        if(begin>end)return NULL;
        int mid=(end+begin)/2;

        TreeNode *X=new TreeNode(A[mid]);
        X->left=func(A,begin,mid-1);
        X->right=func(A,mid+1,end);
        return X;
    }
};


