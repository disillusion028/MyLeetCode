/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/single-number
@Language: C++
@Datetime: 16-12-01 11:44
*/

class Solution {
public:
	/**
	 * @param A: Array of integers.
	 * return: The single number.
	 */
    int singleNumber(vector<int> &A) {
        // write your code here
        //may i use hashtable? Maybe not,hashtable should go through twice
        // xor
        int temp=0;
        for(auto i:A){
            temp^=i;
        }
        return temp;
    }
};
