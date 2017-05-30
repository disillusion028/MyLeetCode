class Solution {
public:
     vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > res;
        vector<int> t;
        vector<bool> visited(nums.size() , false);
        if(nums.size() == 0) return res;
        backtracking(nums,res,t,visited);
        return res;
    }
    void backtracking(vector<int> nums, vector<vector<int> > &res, vector<int> &t, vector<bool> &visited){
        if(t.size() == nums.size()){
            res.push_back(t);
            return;
        }
        
        for(int i= 0 ; i < nums.size() ; ++i){
            if(!visited[i]){
                visited[i] =true;
                t.push_back(nums[i]);
                backtracking(nums, res, t, visited);
                t.pop_back();
                visited[i]=false;
            }
        }
    }
};
//这个回溯法弄的总不够清真，一会儿要用visited数组记录状态，一会儿要用start+1来记录～
