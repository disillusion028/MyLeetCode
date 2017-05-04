class Solution {
public:
    string convertToBase7(int num) {
        string ret,temp;
        if(num==0)return "0";
        if(num<0){
            num=-num;
            while(num){
                ret+=num%7+'0';
                num/=7;
            }
            reverse(ret.begin(),ret.end());
            ret="-"+ret;
            return ret;
        }
        while(num){
            ret+=num%7+'0';
            num/=7;
        }
        reverse(ret.begin(),ret.end());
        return ret;
    }
};
