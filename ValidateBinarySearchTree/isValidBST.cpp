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
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        PriOrderSearch(root, v);
        for(int i = 1; i < v.size(); i++){
            if(v[i] <= v[i-1]){
                return false;
            }
        }
        return true;
    }
    void PriOrderSearch(TreeNode *root, vector<int>& vec){
        if(root == nullptr){
            return;
        }
        PriOrderSearch(root->left, vec);
        vec.push_back(root->val);
        PriOrderSearch(root->right, vec);
    }
};