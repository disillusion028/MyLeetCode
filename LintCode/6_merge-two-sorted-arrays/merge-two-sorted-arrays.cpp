/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/merge-two-sorted-arrays
@Language: C++
@Datetime: 16-11-10 06:28
*/

class Solution {
public:
    /**
     * @param A and B: sorted integer array A and B.
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        for(auto i:B){
            A.push_back(i);
        }
        sort(A.begin(),A.end());
        return A;
    }
};