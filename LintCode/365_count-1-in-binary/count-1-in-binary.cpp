/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/count-1-in-binary
@Language: C++
@Datetime: 16-10-13 03:02
*/

class Solution {
public:
    /**
     * @param num: an integer
     * @return: an integer, the number of ones in num
     */
    int countOnes(int num) {
        // write your code here
        int ret=0,temp=0;
        for (int i=0;i!=32;i++){
            int flag=1<<i;
            temp=num&flag;
            if(temp!=0) ret++;
        }
        return ret;
    }
};