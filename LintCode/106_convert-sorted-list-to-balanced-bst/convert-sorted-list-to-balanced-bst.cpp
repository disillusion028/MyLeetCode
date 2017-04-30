/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/convert-sorted-list-to-balanced-bst
@Language: C++
@Datetime: 17-02-07 03:17
*/

/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
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
     * @param head: The first node of linked list.
     * @return: a tree node
     */
    TreeNode *sortedListToBST(ListNode *head) {
        // write your code here
        if(head==NULL)return NULL;
        vector<int> A;
        while(head!=NULL){
            A.push_back(head->val);
            head=head->next;
        }
        return sortedArrayToBST(A);
    }
     TreeNode *sortedArrayToBST(vector<int> &A) {
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


