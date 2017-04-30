/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/compare-strings
@Language: C++
@Datetime: 16-10-12 09:13
*/

class Solution {
public:
 /**
 * @param A: A string includes Upper Case letters
 * @param B: A string includes Upper Case letter
 * @return: if string A contains all of the characters in B return true 
 * else return false
 */
 bool compareStrings(string A, string B) {
 // write your code here
    if(A.size()<B.size()) return false;
    
    int flag=0;
    int i=0;
    while(i!=B.size()){
       flag=0;
       for(int j=0;j<A.size();j++){
           if(A[j]==B[i]){
               flag=1;
               A[j]='a';
               i++;
               continue;
           }
       }
       if(flag==0) return false;
    }
    return true;
 }
};
