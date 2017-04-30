/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/unique-characters
@Language: C++
@Datetime: 16-12-04 08:49
*/

class Solution {
public:
    /**
     * @param str: a string
     * @return: a boolean
     */
    bool isUnique(string &str) {
        // write your code here
        sort(str.begin(),str.end());
        auto newend=unique(str.begin(),str.end());
        if(newend==str.end())return true;
        else return false;
    }
};