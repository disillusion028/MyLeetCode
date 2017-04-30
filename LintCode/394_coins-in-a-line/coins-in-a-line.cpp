/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/coins-in-a-line
@Language: C++
@Datetime: 17-02-14 11:24
*/

class Solution {
public:
    /**
     * @param n: an integer
     * @return: a boolean which equals to true if the first player will win
     */
     bool firstWillWin(int n) {
        // write your code here
        if(n%3==0)return false;
        else return true;
    }
};