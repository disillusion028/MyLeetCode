/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/search-insert-position
@Language: C++
@Datetime: 16-11-28 09:05
*/

class Solution {
    /** 
     * param A : an integer sorted array
     * param target :  an integer to be inserted
     * return : an integer
     */
public:
    int searchInsert(vector<int> &A, int target) {
        // write your code here
        if(A.empty())return 0;
        int beg=0,end=A.size();
        int mid=beg+(end-beg)/2;
        while(mid!=end&&A[mid]!=target){
            if(target<A[mid]) 
            end=mid;
            else
            beg=mid+1;
            mid=beg+(end-beg)/2;
        }
        return mid;
    }
};