/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/digit-counts
@Language: C++
@Datetime: 16-12-05 08:58
*/

class Solution {
public:
    /*
     * param k : As description.
     * param n : As description.
     * return: How many k's between 0 and n.
     */
    int digitCounts(int k, int n) {
        // write your code here
        string numstr;
        if(k>=10||k<0)return 0;
        while(n){
            numstr+=to_string(n);
            n--;
        }
        numstr+="0";
        string kstr=to_string(k);
        int ret=0;
        for(int i=0;i<numstr.size();i++){
            if(numstr[i]==kstr[0])ret++;
        }
        return ret;
    }
};