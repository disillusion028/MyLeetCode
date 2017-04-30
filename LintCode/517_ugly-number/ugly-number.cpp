/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/ugly-number
@Language: C++
@Datetime: 16-11-25 09:32
*/

class Solution {
public:
    /**
     * @param num an integer
     * @return true if num is an ugly number or false
     */
    bool isUgly(int num) {
        // Write your code here
        if(num==1) return true;
        if(num<=0) return false;
        while(num%2==0||num%3==0||num%5==0){
            if(num%2==0)num=num/2;
            if(num%3==0)num=num/3;
            if(num%5==0)num=num/5;
            if(num==1)return true;
        }
        return false;
    }
};