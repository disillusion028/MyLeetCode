/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/single-number-ii
@Language: C++
@Datetime: 16-12-01 15:08
*/

class Solution {
public:
	/**
	 * @param A : An integer array
	 * @return : An integer 
	 */
    int singleNumberII(vector<int> &A) {
        // write your code here
        vector<int> bits(32,0);
        for(auto i:A){
        for(int j=0;j<32;j++){
                bits[j]=(bits[j]+((i>>j)&1))%3;
            }
        }
        int ret=0;
        int base=1;
        for(int j=0;j<32;j++){
            ret=ret+bits[j]*base;
            base=base*2;
        }
        return ret;
    }
};