/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/o1-check-power-of-2
@Language: C++
@Datetime: 16-11-17 09:36
*/

class Solution {
public:
    /*
     * @param n: An integer
     * @return: True or false
     */
    bool checkPowerOf2(int n) {
        // write your code here
        if(n==-2147483648)return false;
        if(n==0)return false;
        if(((n-1)&n)==0) return true;
        else return false;
    }
};