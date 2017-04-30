/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/unique-paths-ii
@Language: C++
@Datetime: 16-12-04 10:12
*/

class Solution {
public:
    /**
     * @param obstacleGrid: A list of lists of integers
     * @return: An integer
     */ 
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        // write your code here
        if(obstacleGrid.empty())return 0;
        int m=obstacleGrid.size()-1;
        if(obstacleGrid[m].empty())return 0;
        int n=obstacleGrid[m].size()-1;
        if(obstacleGrid[m][n]==1)return 0;
        vector<vector<int>> R(101,vector<int>(101,-1));
        int ret=paths(R,obstacleGrid,m,n);
        
        return ret;
    }
    int paths(vector<vector<int>>&R,vector<vector<int>>&obstacleGrid,int m,int n){
        if(m==0){
            for(int i=0;i<=n;i++){
                if(obstacleGrid[m][i]==1){
                    R[m][n]=0;
                    return 0;
                }
            }
            R[m][n]=1;
            return 1;
        }
        if(n==0){
            for(int i=0;i<=m;i++){
                if(obstacleGrid[i][n]==1){
                    R[m][n]=0;
                    return 0;
                }
            }
            R[m][n]=1;
            return 1;
        }
        
        if(R[m][n]!=-1)return R[m][n];
        else {
            if(obstacleGrid[m-1][n]==0&&obstacleGrid[m][n-1]==0)
                R[m][n]=paths(R,obstacleGrid,m-1,n)+paths(R,obstacleGrid,m,n-1);
            else if(obstacleGrid[m-1][n]==1&&obstacleGrid[m][n-1]==0)
                R[m][n]=paths(R,obstacleGrid,m,n-1);
            else if(obstacleGrid[m-1][n]==0&&obstacleGrid[m][n-1]==1)
                R[m][n]=paths(R,obstacleGrid,m-1,n);
            else if(obstacleGrid[m-1][n]==1&&obstacleGrid[m][n-1]==1)
                R[m][n]=0;
            return R[m][n];
        }
    }
    
};