class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(nums.empty())return nums;
        int a=nums.size();
        int b=nums[0].size();
        if((a)*(b)!=r*c)return nums;
        vector<vector<int>> ret(r,vector<int>(c));
        int x=0,y=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                ret[x][y]=nums[i][j];
                y++;
                if(y==c){
                    y=0;
                    x++;
                }
            }
        }
        return ret;
    }
};//not bad
