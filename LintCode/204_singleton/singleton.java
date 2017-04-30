/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/singleton
@Language: Java
@Datetime: 16-12-01 16:07
*/

class Solution {
    /**
     * @return: The same instance of this class every time
     */
    private static Solution instance=new Solution();  
    private Solution(){}
    public static Solution getInstance() {
        // write your code here
    return instance;  

    }
};