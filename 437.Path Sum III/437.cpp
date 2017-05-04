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
    int pathSum(TreeNode* root, int sum) {
        int ret=0;
        int x=0;
        travel1(root,sum,x,ret);
        return ret;
    }
    void travel1(TreeNode *root,int sum,int &x,int &ret){
        if(root==NULL)return;
        travel(root,sum,x,ret);
        travel1(root->left,sum,x,ret);
        travel1(root->right,sum,x,ret);
    }
    void travel(TreeNode* root,int sum,int &x,int &ret){
        if(root==NULL)return;
        x+=root->val;
        if(x==sum){ret++;}
        travel(root->left,sum,x,ret);
        travel(root->right,sum,x,ret);
        x-=root->val;
    }
};// it is very easy to think but not opt
//some one write a code like this
//too hard to read but really fast
//somehow like question 560. Subarray Sum Equals K
class Solution {
private:
    int sumUp(TreeNode* root, int pre, int sum, unordered_map<int, int>& map) {
        if(!root) return 0;
        int temp = root->val + pre;
        int res = (temp == sum) + (map.count(temp - sum)? map[temp - sum]:0);
        map[temp]++;
        res += sumUp(root->left, temp, sum, map) + sumUp(root->right, temp, sum, map);
        map[temp]--;
        return res;
    }
public:
    int pathSum(TreeNode* root, int sum) {
        unordered_map<int, int> map;
        return sumUp(root, 0, sum, map);
    }
};
