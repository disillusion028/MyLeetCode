/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/reverse-words-in-a-string
@Language: C++
@Datetime: 16-11-24 13:48
*/

class Solution {
public:
    /**
     * @param s : A string
     * @return : A string
     */
    string reverseWords(string s) {
        // write your code here
        vector<string> vs;
        string temp="";
        for(int i=0;i<s.size();){
            while(i<s.size()&&s[i]==' '){
                i++;
            }
            if(i<s.size()){
            temp=temp+s[i];
            i++;
            if(s[i]==' '||i==s.size()){
                vs.push_back(temp);
                temp="";
            }
            }
        }
        string ret="";
        for(int i=vs.size()-1;i>=0;i--){
            if(ret=="")ret=vs[i];
            else ret=ret+' '+vs[i];
        }
        //ret=ret+"";
        return ret;
    }
};