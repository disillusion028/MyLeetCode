/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/merge-sorted-array
@Language: C++
@Datetime: 16-11-10 01:57
*/

class Solution {
public:
    /**
     * @param A: sorted integer array A which has m elements, 
     *           but size of A is m+n
     * @param B: sorted integer array B which has n elements
     * @return: void
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        vector<int> temp;
        for(int i=0;i<m;i++) temp.push_back(A[i]);
        
        int j_1=0,j_2=0;
        for(int i=0;i<m+n;i++){
            if((j_1<m)&&(j_2<n)){
            if(temp[j_1]<B[j_2]){
                A[i]=temp[j_1];
                j_1++;
            }
            else{
                A[i]=B[j_2];
                j_2++;
            }
            }
            else if(j_1>=m){
                A[i]=B[j_2];
                j_2++;
            }
            else if(j_2>=n){
                A[i]=temp[j_1];
                j_1++;
            }
        }
    }
};