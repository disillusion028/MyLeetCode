class Solution {
public:
    string countAndSay(int n) {
        string str="1";
        for(int i=1;i<n;i++){
            string temp="";
            int x=1;
            for(size_t j=0;j<str.size();j++){
                if(j==str.size()-1){temp+="1";temp+=str[j];break;}
                if(str[j]!=str[j+1]){
                    temp+="1";
                    temp+=str[j];
                }
                while(str[j]==str[j+1]){
                    x++;
                    j++;
                    if(j==str.size()-1){temp+=to_string(x);temp+=str[j-1];break;}
                }if(x!=1&&j!=str.size()-1){
                    temp+=to_string(x);temp+=str[j-1];
                }
                x=1;
            }
            str=temp;
        }
        return str;
    }
};//maybe it is better not to use to_string
