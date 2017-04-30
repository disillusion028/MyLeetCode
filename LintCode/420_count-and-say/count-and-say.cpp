/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/count-and-say
@Language: C++
@Datetime: 16-11-09 03:19
*/

class Solution {
public:
    /**
     * @param n the nth
     * @return the nth sequence
     */
    string countAndSay(int n) {
        // Write your code here
        string s="1";
        if(n==1) return s;
        while(--n){
        s=saynumber(s);
        }
        return s;
    }
    
    string saynumber(string str){
        string ret;
        int size=str.size();
        int count =1;
        for(int i=0;i<str.size()-1;i++)
        {
            if(str[i]==str[i+1]) count++;
            else{
                ret=ret+to_string(count)+str[i];
                count=1;
            }
        }
        if(str[size-1]==str[size-2]) {
            ret=ret+to_string(count)+str[size-1];
        }
        else{
            ret=ret+to_string(1)+str[size-1];
        }
        return ret;
    }
};