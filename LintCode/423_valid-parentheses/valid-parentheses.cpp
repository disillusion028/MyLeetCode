/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/valid-parentheses
@Language: C++
@Datetime: 16-12-07 04:03
*/

class Solution {
public:
    /**
     * @param s A string
     * @return whether the string is a valid parentheses
     */
    bool isValidParentheses(string& s) {
        // Write your code here
        if(s.size()<=1)return false;
        if(s.size()%2!=0)return false;
        stack<char> mystack;
        //for(auto i:s){
         //   if((i!='(')&&(i!=')')&&(i!='[')&&(i!=']')&&(i!='{')&&(i!='}'))return false;
        //}
        for(auto i:s){
            if(i=='('||i=='['||i=='{'){
                mystack.push(i);
            }
            if(i==')'){
                if(mystack.top()=='('){
                    mystack.pop();
                }
                else return false;
            }
            if(i==']'){
                if(mystack.top()=='['){
                    mystack.pop();
                }
                else return false;
            }
            if(i=='}'){
                if(mystack.top()=='{'){
                    mystack.pop();
                }
                else return false;
            }
        }
        if(mystack.empty())return true;
        return false;
    }
};