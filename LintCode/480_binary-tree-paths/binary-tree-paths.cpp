/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/binary-tree-paths
@Language: C++
@Datetime: 16-11-23 07:59
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
     * @param root the root of the binary tree
     * @return all root-to-leaf paths
     */
    vector<string> binaryTreePaths(TreeNode* root) {
        // Write your code here
        
        vector<string> ret;
        if(root==NULL) return ret;
        
        string s="";
        Paths(root,ret,s);
        return ret;
    }
    
    void Paths(TreeNode *root,vector<string> &ret,string s){
        if(NULL==root) return;
        if(root->left==NULL && root->right==NULL){
            if(s=="") s+=to_string(root->val);
            else s+="->"+to_string(root->val);
            ret.push_back(s);
            s="";
            return ;
        }
        if(s=="") s+=to_string(root->val);
        else s+="->"+to_string(root->val);
        Paths(root->left,ret,s);
        Paths(root->right,ret,s);
    }
};