/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/first-missing-positive
@Language: C++
@Datetime: 16-12-01 03:01
*/

class Solution {
public:
    /**    
     * @param A: a vector of integers
     * @return: an integer
     */
    int firstMissingPositive(vector<int> A) {
        // write your code here
        //can I use sort??
        // is it a HASH table question?
        int hashtable[1000]={0};
        for(int i=0;i<A.size();i++){
            if(A[i]>0){
                hashtable[A[i]]=1;
            }
        }
        int num=1;
        for(int i=1;i<1000;i++){
            if(hashtable[i]==0){
                num=i;
                break;
            }
        }
        
        return num;
    }
};