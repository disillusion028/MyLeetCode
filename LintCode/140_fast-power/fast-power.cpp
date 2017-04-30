/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/fast-power
@Language: C++
@Datetime: 16-11-29 08:13
*/

class Solution {
public:
    /*
     * @param a, b, n: 32bit integers
     * @return: An integer
     */
    int fastPower(int a, int b, int n) {
        // write your code here
       if(a==0)return 0;
       if(n==0)return 1%b;
       long long A=1;
       long long S=a;
       while(n){
           if(n%2==1) A=(A*S)%b;
           n=n/2;
           if(n) S=(S*S)%b;
       }
       return A;
    }
};