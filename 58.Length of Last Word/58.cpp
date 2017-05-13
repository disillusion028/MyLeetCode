class Solution {
public:
    int lengthOfLastWord(string s) {
       int ret=0;
       bool flag=false;
       for(int i=s.length()-1;i>=0;i--){
           if(s[i]!=' ')flag=true;
           if(flag&&s[i]!=' ')ret++;
           else if(flag&&s[i]==' ')break;
       }
       return ret;
    }
};//ez
