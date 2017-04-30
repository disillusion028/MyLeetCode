/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/valid-palindrome
@Language: C++
@Datetime: 16-12-06 11:05
*/

class Solution {
public:
    /**
     * @param s A string
     * @return Whether the string is a valid palindrome
     */
    bool isPalindrome(string& s) {
        // Write your code here
        if(s.size()<=1)return true;
        int i=0,j=s.size()-1;
        while(i<j){
            while(!((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))){
                i++;
                if(i>=j)return true;
            }
            while(!((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'))){
                j--;
                if(i>=j)return true;
            }
            if(s[i]!=s[j]){
                if(!((s[i]>='a'&&s[i]<='z')||(s[j]>='a'&&s[j]<='z')))
                return false;
                else if((s[i]>='a'&&s[i]<='z')){
                    if(s[i]-32!=s[j])return false;
                }
                else {
                    if(s[j]-32!=s[i])return false;
                }
            }
            i++;j--;
        }
        return true;
    }
};