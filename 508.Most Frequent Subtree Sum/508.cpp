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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> ret;
        if(root==NULL)return ret;
        unordered_map<int,int> mymap;//it is better to use unordered_map than map.
        FirstTravel(root);
        SecondTravel(root,mymap);
        int max=0;
        for(auto iter:mymap){
            if(iter.second>max)max=iter.second;
        }
        for(auto iter:mymap){
            if(iter.second==max)ret.push_back(iter.first);
        }
        return ret;
    }
    void FirstTravel(TreeNode *root){
        if(root==NULL)return;
        FirstTravel(root->left);
        FirstTravel(root->right);
        if(root->left&&root->right){
            root->val+=root->left->val+root->right->val;
        }else if(root->left){
            root->val+=root->left->val;
        }else if(root->right){
            root->val+=root->right->val;
        }
    }
    void SecondTravel(TreeNode *root,unordered_map<int,int> &mymap){
        if(root==NULL)return;
        mymap[root->val]++;
        SecondTravel(root->left,mymap);
        SecondTravel(root->right,mymap);
    }
};
