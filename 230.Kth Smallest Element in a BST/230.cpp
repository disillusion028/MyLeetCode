/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> myvec;
        inOrder(root,myvec);
        return myvec[k-1];
    }
private:
    void inOrder(TreeNode* root,vector<int> &myvec){
        if(root==NULL)return;
        
        inOrder(root->left,myvec);
        myvec.push_back(root->val);
        inOrder(root->right,myvec);
    }
};//easy to consider,but use O(n) capacity,it is easy to be O(1) capacity...  and when I use my optimization way,it's 19ms and this function is 16ms... it confused me and don't wanna to change this code.
