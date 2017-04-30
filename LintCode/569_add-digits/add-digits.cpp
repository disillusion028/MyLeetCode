/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/add-digits
@Language: C++
@Datetime: 17-02-10 09:16
*/

class Solution {
public:
    /**
     * @param num a non-negative integer
     * @return one digit
     */
    int addDigits(int num) {
        // Write your code here
start:        int a=0;
        while(num){
            a+=num%10;
            num/=10;
        }
        if(a>=10){
            num=a;
            goto start;
        }
        else{
            return a;
        }
    }
};