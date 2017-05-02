class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        if(numRows==0)return ret;
        ret.push_back({1});
        if(numRows==1)
            return ret;
        ret.push_back({1,1});
        if(numRows==2)return ret;
        for(int i=2;i<numRows;i++){
            vector<int> temp;
            temp.push_back(1);
            for(int j=1;j<i;j++){
                temp.push_back((ret[i-1][j-1]+ret[i-1][j]));
            }
            temp.push_back(1);
            ret.push_back(temp);
        }
        return ret;
    }
};
