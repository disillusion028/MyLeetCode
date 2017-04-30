/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/trailing-zeros
@Language: C++
@Datetime: 16-11-28 08:07
*/

class Solution {
 public:
    // param n : description of n
    // return: description of return 
    long long trailingZeros(long long n) {
        long long p=0;
        long long x=n/5;
        while(x){
            p=p+x;
            x=x/5;
        }
        return p;
    }
};
