/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/update-bits
@Language: C++
@Datetime: 16-11-29 05:49
*/

class Solution {
public:
    /**
     *@param n, m: Two integer
     *@param i, j: Two bit positions
     *return: An integer
     */
    int updateBits(int n, int m, int i, int j) {
        // write your code here
        int x=0;
        int y=1;
        for(int p=i;p<=j;p++){
            x=x|(y<<p);
        }
        int z;
        z=~x;
        n=n&z;
        n=n^(m<<i);
        return n;
    }
};