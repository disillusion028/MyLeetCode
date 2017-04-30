/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/find-peak-element
@Language: C++
@Datetime: 16-11-28 12:15
*/

class Solution {
public:
    /**
     * @param A: An integers array.
     * @return: return any of peek positions.
     */
    int findPeak(vector<int> A) {
        // write your code here
        if(A.size()<3)return -1;
        for(int i=1;i<A.size()-1;i++){
            if(A[i]>A[i-1]&&A[i]>A[i+1])return i;
        }
        return -1;
    }
};
