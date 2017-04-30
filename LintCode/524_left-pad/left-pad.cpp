/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/left-pad
@Language: C++
@Datetime: 16-11-04 03:23
*/

class StringUtils {
public:
    /**
     * @param originalStr the string we want to append to
     * @param size the target length of the string
     * @param padChar the character to pad to the left side of the string
     * @return a string
     */
    static string leftPad(string& originalStr, int size, char padChar=' ') {
        // Write your code here
        int Osize = originalStr.size();
        if(size <= Osize) return originalStr;
        
        int diffsize = size - Osize;
        string ret(diffsize,padChar);
        ret = ret + originalStr; 
        return ret;
    }
};