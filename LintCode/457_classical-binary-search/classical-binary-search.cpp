/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/classical-binary-search
@Language: C++
@Datetime: 17-01-27 04:31
*/

class Solution {
public:
    /**
     * @param A an integer array sorted in ascending order
     * @param target an integer
     * @return an integer
     */
    int findPosition(vector<int>& A, int target) {
        // Write your code here
        if(A.empty())return -1;
        int beg=0,end=A.size();
        int mid=beg+(end-beg)/2;
        while(mid!=end&&A[mid]!=target){
            if(target<A[mid]) 
            end=mid;
            else
            beg=mid+1;
            mid=beg+(end-beg)/2;
        }
        if(A[mid]==target) {
            //while(mid>0&&A[mid-1]==target) mid--;
            return mid;
        }
        return -1;
    }
};