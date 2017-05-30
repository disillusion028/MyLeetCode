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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // Level order travel
        vector<vector<int>> ret;
        if(root==NULL)return ret;
        vector<TreeNode*>myvec;
        myvec.push_back(root);
        ret.push_back({root->val});
        while(!myvec.empty()){
            vector<TreeNode*> temp;
            vector<int>haha;
            for(auto t:myvec){
                if(t->left){temp.push_back(t->left);haha.push_back(t->left->val);}
                if(t->right){temp.push_back(t->right);haha.push_back(t->right->val);}
            }
            
            if(!haha.empty())ret.push_back(haha);
            myvec.swap(temp);
        }
        return ret;
    }
};
//这题可以用queue，每次计算该层节点数量，防止后续添加的子节点干扰到了对父节点的扩展
//我觉得还是我这样写比较省事儿，用了两倍于queue的空间。
