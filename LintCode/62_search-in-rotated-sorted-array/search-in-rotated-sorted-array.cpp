/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/search-in-rotated-sorted-array
@Language: C++
@Datetime: 16-11-28 13:27
*/

class Solution {
    /** 
     * param A : an integer ratated sorted array
     * param target :  an integer to be searched
     * return : an integer
     */
public:
    int search(vector<int> &A, int target) {
        // write your code here
        //why should I use this way?
        if(A.empty())return -1;
        
        int beg=0,end=A.size();
        while(beg!=end){
            if(A[beg]==target)return beg;
            beg++;
        }
        return -1;
    }
};