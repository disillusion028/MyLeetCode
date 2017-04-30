/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/reverse-integer
@Language: C++
@Datetime: 16-11-21 01:46
*/

class Solution {
public:
    /**
     * @param n the integer to be reversed
     * @return the reversed integer
     */
    int reverseInteger(int n) {
        // Write your code here
        vector<int> v,v2;
        int sig=(n>=0)?1:-1;
        if (sig==-1){
        n=-n;
        }
        while(n){
            v.push_back(n%10);
            n/=10;
        }
        int ret=0;
        for(int i=0;i<v.size();i++){
            ret=ret*10+v[i];
        }
        int temp=ret;
        while(temp){
            v2.push_back(temp%10);
            temp/=10;
        }
        while(v2.size()<v.size()) v2.push_back(0);
        for(int i=0;i<v.size();i++){
            if(v[i]!=v2[v.size()-1-i])return 0;
        }
        
        
        if(sig==-1) ret=-ret;

        return ret;
    }
};