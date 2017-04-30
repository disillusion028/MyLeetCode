/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/longest-increasing-continuous-subsequence
@Language: C++
@Datetime: 16-11-04 07:50
*/

class Solution {
public:
    /**
     * @param A an array of Integer
     * @return  an integer
     */
    int longestIncreasingContinuousSubsequence(vector<int>& A) {
        // Write your code here
        int ret,cp;
        if(A.empty()) {
            return 0;
        }
        if(A.size()==1) return 1;
        if(A.size()==2) return 2;
        int flag;
        cp=ret=2;
        if(A[0]<A[1])flag=0;
        else flag=1;
        int i=2;
        while(i<A.size()){
            if(flag==0){
                if(A[i-1]<A[i]){
                    flag=0;
                    cp++;
                    if(cp>ret) ret=cp;
                }
                if(A[i-1]>A[i]){
                    flag=1;
                    cp=2;
                }
            }
            else if(flag==1){
                if(A[i-1]<A[i]){
                    flag=0;
                    cp=2;
                }
                if(A[i-1]>A[i]){
                    flag=1;
                    cp++;
                    if(cp>ret) ret=cp;
                }
            }
            i++;
        }

        return ret;
    }
};