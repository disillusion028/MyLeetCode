class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> zeros(matrix.size());
        int m=matrix.size();
        int n=matrix[0].size();
        for(size_t i=0;i<m;i++){
            for(size_t j=0;j<n;j++){
                if(matrix[i][j]==0)zeros[i].push_back(j);
            }
        }
        for(size_t i=0;i<m;i++){
            if(!zeros[i].empty()){
                for(size_t j=0;j<n;j++){
                    matrix[i][j]=0;       
                }
            for(size_t k=0;k<zeros[i].size();k++){
                for(size_t j=0;j<m;j++){
                    matrix[j][zeros[i][k]]=0;
                }
            }
            }
        }
    }
};//O(n+m) capacity, really bad...upset
