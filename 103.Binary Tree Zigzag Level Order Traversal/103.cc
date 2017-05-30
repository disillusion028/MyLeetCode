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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        // Level order travel
        vector<vector<int>> ret;
        if(root==NULL)return ret;
        vector<TreeNode*>myvec;
        myvec.push_back(root);
        ret.push_back({root->val});
        bool flag =true;
        while(!myvec.empty()){
            vector<TreeNode*> temp;
            vector<int>haha;
            for(auto t:myvec){
                if(t->left){temp.push_back(t->left);haha.push_back(t->left->val);}
                if(t->right){temp.push_back(t->right);haha.push_back(t->right->val);}
            }
            
            if(!haha.empty()){
                if(flag){
                    reverse(haha.begin(),haha.end());
                    ret.push_back(haha);
                    flag=false;
                }
                else{
                    ret.push_back(haha);
                    flag=true;
                }
            }
            myvec.swap(temp);
        }
        return ret;
    }
};//偷懒了，直接想着和102这题一样，只是加了一个reverse函数，但是实际上更巧妙的方法是用两个stack
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        stack<TreeNode*> s1, s2;
        s1.push(root);
        while(!s1.empty() || !s2.empty()) {
            if (!s1.empty()) {
                vector<int> cur;
                while(!s1.empty()) {
                    TreeNode* tmp = s1.top();
                    cur.push_back(tmp->val);
                    if (tmp->left) s2.push(tmp->left);
                    if (tmp->right) s2.push(tmp->right);
                    s1.pop();
                }
                ans.push_back(cur);
            }
            if (!s2.empty()) {
                vector<int> cur;
                while(!s2.empty()) {
                    TreeNode* tmp = s2.top();
                    cur.push_back(tmp->val);
                    if (tmp->right) s1.push(tmp->right);
                    if (tmp->left) s1.push(tmp->left);
                    s2.pop();
                }
                ans.push_back(cur);
            }
        }
        return ans;
    }
};//所幸的是两个方法时间差距并没想象中的那么大，可能是因为测试案例不够大吧？
