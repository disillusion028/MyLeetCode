/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/plus-one
@Language: C++
@Datetime: 16-11-21 03:08
*/

class Solution {
public:
    /**
     * @param digits a number represented as an array of digits
     * @return the result
     */
    vector<int> plusOne(vector<int>& digits) {
        // Write your code here
        digits[digits.size()-1]+=1;
        if(digits[digits.size()-1]!=10) return digits;
        digits[digits.size()-1]=0;
        if(digits.size()==1) {
            digits[0]=1;
            digits.push_back(0);
            return digits;
        }
        
        for(int i=digits.size()-2;i>=0;i--){
            digits[i]+=1;
            if(digits[i]!=10)return digits;
            digits[i]=0;
        }
        
        digits[0]=1;
        digits.push_back(0);
        return digits;
    }
};