/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/fibonacci
@Language: C++
@Datetime: 16-09-18 14:32
*/

class Solution{
public:
    /**
     * @param n: an integer
     * @return an integer f(n)
     */
    int fibonacci(int n) {
        // write your code here
        int *a=new int(n);
        a[0]=0;
        a[1]=1;
        for(int i=2;i<n;i++){
            a[i]=a[i-1]+a[i-2];
        }
       return a[n-1];
        
    }
};
