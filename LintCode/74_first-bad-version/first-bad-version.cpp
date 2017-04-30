/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/first-bad-version
@Language: C++
@Datetime: 16-11-28 12:23
*/

/**
 * class SVNRepo {
 *     public:
 *     static bool isBadVersion(int k);
 * }
 * you can use SVNRepo::isBadVersion(k) to judge whether 
 * the kth code version is bad or not.
*/
class Solution {
public:
    /**
     * @param n: An integers.
     * @return: An integer which is the first bad version.
     */
    int findFirstBadVersion(int n) {
        // write your code here
        if(n<=0)return -1;
        if(n==1)return 1;
        int begin=0;
        int end=n+1;
        int mid=(begin+end)/2;
        while(begin!=end){
            if(SVNRepo::isBadVersion(mid)){
                end=mid;
            }
            else begin=mid+1;
            mid=(begin+end)/2;
        }
        return mid;
    }
};
