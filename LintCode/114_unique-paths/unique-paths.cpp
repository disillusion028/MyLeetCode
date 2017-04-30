/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/unique-paths
@Language: C++
@Datetime: 16-11-29 03:32
*/

class Solution {
public:
    /**
     * @param n, m: positive integer (1 <= n ,m <= 100)
     * @return an integer
     */
    int uniquePaths(int m, int n) {
        // wirte your code here
        if(m==0||n==0)return 0;
        if(m==1||n==1)return 1;
        vector<vector<int>> r(101,vector<int>(101,0));
        int ret=paths(r,m,n);
        return ret;
    }
    int paths(vector<vector<int>> &r,int m,int n){
        if(m==0||n==0)return 0;
        if(m==1||n==1)return 1;
        if(r[m][n]!=0)return r[m][n];
        else {
            r[m][n]=paths(r,m-1,n)+paths(r,m,n-1);
            return r[m][n];
        }
    }
};
