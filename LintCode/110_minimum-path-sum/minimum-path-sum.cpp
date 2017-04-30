/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/minimum-path-sum
@Language: C++
@Datetime: 16-12-06 10:44
*/

class Solution {
public:
    /**
     * @param grid: a list of lists of integers.
     * @return: An integer, minimizes the sum of all numbers along its path
     */
    int minPathSum(vector<vector<int> > &grid) {
        // write your code here
        if(grid.empty())return 0;
        int m=grid.size()-1;
        if(grid[0].empty())return 0;
        int n=grid[0].size()-1;
        vector <vector<int> >sum(m+1,vector<int>(n+1,-1));
        int ret=getpathsum(grid,sum,m,n);
        
        return ret;
    }
    int getpathsum(vector<vector<int>>&grid,vector<vector<int>>&sum,int m,int n){
        if(sum[m][n]!=-1) return sum[m][n];
        if(m==0){
            sum[m][0]=grid[m][0];
            for(int i=1;i<=n;i++){
                sum[m][i]=grid[m][i]+sum[m][i-1];
            }
            return sum[m][n];
        }
        if(n==0){
            sum[0][n]=grid[0][n];
            for(int i=1;i<=m;i++){
                sum[i][n]=grid[i][n]+sum[i-1][n];
            }
            return sum[m][n];
        }
        if(sum[m-1][n]==-1)sum[m-1][n]=getpathsum(grid,sum,m-1,n);
        if(sum[m][n-1]==-1)sum[m][n-1]=getpathsum(grid,sum,m,n-1);
        if(sum[m-1][n]!=-1&&sum[m][n-1]!=-1)
        {
        sum[m][n]=grid[m][n]+((sum[m-1][n]>sum[m][n-1])?sum[m][n-1]:sum[m-1][n]);
        return sum[m][n];
        }
    }
};
