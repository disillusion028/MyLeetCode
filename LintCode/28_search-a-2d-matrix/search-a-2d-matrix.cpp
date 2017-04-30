/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/search-a-2d-matrix
@Language: C++
@Datetime: 16-11-28 09:32
*/

class Solution {
public:
    /**
     * @param matrix, a list of lists of integers
     * @param target, an integer
     * @return a boolean, indicate whether matrix contains target
     */
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        // write your code here
        if(matrix.empty()) return false;
        int begin=0;
        int end=matrix.size();
        int mid=begin+(end-begin)/2;
        int N_size=matrix[0].size();
        int mid_beg=matrix[mid][0];
        int mid_end=matrix[mid][N_size-1];
        if(target<matrix[begin][0])return false;
        if(target>matrix[end-1][N_size-1]) return false;
        while(end!=begin&&target<mid_beg){
            end=mid;
            mid=begin+(end-begin)/2;
            mid_beg=matrix[mid][0];
            mid_end=matrix[mid][N_size-1];
        }
        while(end!=begin&&target>mid_end){
            begin=mid+1;
            mid=begin+(end-begin)/2;
            mid_beg=matrix[mid][0];
            mid_end=matrix[mid][N_size-1];
        }
        for(int i=0;i!=N_size;i++){
            if(matrix[mid][i]==target)return true;
        }
        return false;
    }
};
