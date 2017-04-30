/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/sqrtx
@Language: C++
@Datetime: 16-11-28 07:00
*/

class Solution {
public:
    /**
     * @param x: An integer
     * @return: The sqrt of x
     */
    int sqrt(int x) {
        // write your code here
        float y=x;
        if(x<0)return -1;
        float xhalf = 0.5f*y;
	    int i = *(int*)&y; // get bits for floating VALUE 
	    i = 0x5f375a86- (i>>1); // gives initial guess y0
	    y = *(float*)&i; // convert bits BACK to float
	    y = y*(1.5f-xhalf*y*y); // Newton step, repeating increases accuracy
	    y = y*(1.5f-xhalf*y*y); // Newton step, repeating increases accuracy
 	    y = y*(1.5f-xhalf*y*y); // Newton step, repeating increases accuracy

	return 1/y;
    }
};