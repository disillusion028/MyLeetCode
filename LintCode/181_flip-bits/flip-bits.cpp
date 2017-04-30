/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/flip-bits
@Language: C++
@Datetime: 16-10-27 02:54
*/

class Solution {
public:
    /**
     *@param a, b: Two integer
     *return: An integer
     */
    int bitSwapRequired(int a, int b) {
        // write your code here
        int c=a^b;
        int j=0,k=0;
        while( j<32){
            if((c & (1<<j))!=0) k++;
            j++;
        }
        return k;
    }
};