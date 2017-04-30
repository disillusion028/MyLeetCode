/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/strstr
@Language: C++
@Datetime: 16-11-28 12:43
*/

class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        
        if((!source)||(!target)) return -1;
        if(*target=='\0') return 0;
        int p,j=0,flag=0;
        
        for(int i=0;source[i]!='\0';i++){
            flag=0;
            if(target[j]==source[i]){
                p=i;
                while(target[j]!='\0'){
                    if(target[j++]!=source[p++]){
                        flag=1;
                        break;
                    }
                }
                if(target[j]=='\0'&&flag==0)return i;
                j=0;
            }
        }
        
        return -1;
    }
};
