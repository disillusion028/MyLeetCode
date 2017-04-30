/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/sort-integers
@Language: C++
@Datetime: 16-09-19 14:59
*/

class Solution {
public:
    /**
     * @param A an integer array
     * @return void
     */
    void sortIntegers(vector<int>& A) {
        // Write your code here
        if(A.size()==0) return ;
        int temp,i,j;
        for(i=0;i<A.size()-1;i++){
            for(j=0;j<A.size()-i-1;j++){
                if(A[j]>A[j+1]){
                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                }
            }
        }
            
    }
};