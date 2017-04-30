/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/string-to-integer-ii
@Language: C++
@Datetime: 16-11-30 06:41
*/

class Solution {
public:
    /**
     * @param str: A string
     * @return An integer
     */
     const int MYINT_MAX=0x7fffffff;
     const int MYINT_MIN=-INT_MAX-1;
     const string MYMAX="2147483647";
     const string MYMIN="2147483648";
    int atoi(string str) {
        // write your code here
        
        string integer;
        int flag=0;
        int i=0;
        if(str.empty())return 0;
        while(i<str.length()&&str[i]==' ')i++;
        if(i==str.length())return 0;
        if(str[i]=='-'){
            flag=-1;
            i++;
        }else if(str[i]=='+'){
            flag=1;
            i++;
        }
        for(;i<str.length()&&str[i]!='.'&&str[i]<='9'&&str[i]>='0';i++){
            if(str[i]>='0'&&str[i]<='9')
                integer+=str[i];
        }
        if(integer.empty())return 0;
        if(flag==0||flag==1){
            if(integer.length()>10) return MYINT_MAX;
            else if(integer.length()==10){
                if(integer>MYMAX) return MYINT_MAX;
            }
        }
        if(flag==-1){
            if(integer.length()>10)return MYINT_MIN;
            else if(integer.length()==10){
                if(integer>MYMIN)return MYINT_MIN;
            }
        }
        
        stringstream ss;
        int ret;
        ss<<str;
        ss>>ret;
        return ret;
    }
};