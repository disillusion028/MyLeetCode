class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        dfs(ret,"",n,n);
        return ret;
    }
    void dfs(vector<string> &ret,string temp,int left,int right){
        if(left==0&&right==0){ret.push_back(temp);return;}
        if(left>right)return;
        if(left>0)
            dfs(ret,temp+"(",left-1,right);
        if(right>0)
            dfs(ret,temp+")",left,right-1);
    }
};
//这样写还是挺接近我理解的dfs的
