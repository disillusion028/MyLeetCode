/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/binary-representation
@Language: C++
@Datetime: 16-12-01 05:10
*/

class Solution {
public:
    /**
     *@param n: Given a decimal number that is passed in as a string
     *@return: A string
     */
     const double eps=1e-32;
     const int MYINT_MAX=0x7fffffff;
     const int MYINT_MIN=-INT_MAX-1;
     const string MYMAX="2147483647";
     const string MYMIN="2147483648";
     string binaryRepresentation(string n) {
        // wirte your code here
        string integer;
        string decimal;
        stringstream streamint;
        stringstream streamdouble;
        
        int part_1=-1,part_2_flag=-1;
        string ret_1;
        double part_2;
        int flag=0;
        int i=0;
        //if(n.empty())return "";
        while(i<n.length()&&n[i]==' ')i++;
        
        if(i==n.length())return "";
        if(n[i]=='-'){
            flag=-1;
            i++;
        }else if(n[i]=='+'){
            flag=1;
            i++;
        }
        for(;i<n.length()&&n[i]!='.';i++){
           if(n[i]>'9'||n[i]<'0') part_1=0;
                integer+=n[i];
        }
        if(integer.empty()) part_1=0;
        if(flag==0||flag==1){
            if(integer.length()>10) part_1=0;
            else if(integer.length()==10){
                if(integer>MYMAX) part_1=0;
            }
        }
        if(flag==-1){
            part_1=0;
        }
        if(part_1==-1){
        streamint<<integer;
        streamint>>part_1;
        }

        if(part_1==0) ret_1.push_back('0');
        while(part_1){
            if(part_1%2==0) ret_1.insert(ret_1.begin(),'0');
            if(part_1%2!=0) ret_1.insert(ret_1.begin(),'1');
            part_1/=2;
        }
        if(n[i]=='.')i++;
        for(;i<n.length();i++){
            if(n[i]>'9'||n[i]<'0') part_2_flag=0;
            decimal+=n[i];
        }
        if(decimal.empty())part_2_flag=0;
        
        if(part_2_flag==0){
            decimal=".0";
            ret_1=ret_1+decimal;
            return ret_1;
        }
        decimal.insert(decimal.begin(),'.');
        decimal.insert(decimal.begin(),'0');
        streamdouble<<decimal;
        streamdouble>>part_2;
        if ((part_2-0) < eps) return ret_1;
        decimal=".";
        int j=0;
        for(;j<32;j++){
            if ((part_2-(eps*pow(2,i))) < 0 ) break;
            if (part_2*2>=1){
                decimal.push_back('1');
                part_2=part_2*2;
                part_2--;
            }
            else{
                part_2=part_2*2;
                decimal.push_back('0');
            }
            
        }
        if(j>=32)return "ERROR";
        
        ret_1=ret_1+decimal;
        return ret_1;
    }
};
