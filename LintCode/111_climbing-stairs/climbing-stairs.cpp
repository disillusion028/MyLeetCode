/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/climbing-stairs
@Language: C++
@Datetime: 16-10-11 10:47
*/

class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        if(n<0) return n;
        int *ret=new int (n+1);
        ret[0]=1;ret[1]=1;ret[2]=2;
        if(n>2){
             for(int i=3;i!=n+1;i++){
                ret[i]=ret[i-1]+ret[i-2];
             }
        }
        
        return ret[n];
    }
};
