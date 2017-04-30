/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/delete-digits
@Language: C++
@Datetime: 16-12-09 12:42
*/

class Solution {
public:
    /**
     *@param A: A positive integer which has N digits, A is a string.
     *@param k: Remove k digits.
     *@return: A string
     */
    string DeleteDigits(string A, int k) {
        // wirte your code here
        if(A.size()<=1)return A;
        string B=A;
        lable:
        while(k--){
            for(auto i=B.begin()+1;i<B.end();){
                if(*(i-1)>*i){
                    B.erase(i-1);
                    goto lable;
                }
                if(i==B.end()-1){
                    i=B.erase(i);
                    goto lable;
                }
                if(*i>*(i+1)){
                    i=B.erase(i);
                    goto lable;
                }
                i++;
            }
        }
        for(auto i=B.begin();i<B.end();){
            if(*i!='0')return B;
            if(*i=='0')i=B.erase(i);
        }
        if(B.empty())return "0";
    }
};
