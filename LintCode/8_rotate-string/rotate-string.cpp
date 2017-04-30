/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/rotate-string
@Language: C++
@Datetime: 16-12-04 08:43
*/

class Solution {
public:
    /**
     * @param str: a string
     * @param offset: an integer
     * @return: nothing
     */
    void rotateString(string &str,int offset){
        //wirte your code here
        if(str.size()<=1) return;
        char temp;
        offset=offset%(str.size());
        while(offset--){
            temp=str[str.size()-1];
            for(int i=str.size()-1;i>=1;i--){
                str[i]=str[i-1];
            }
            str[0]=temp;
        }
    }
};
