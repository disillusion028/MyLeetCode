class Solution {
public:
    string validIPAddress(string IP) {
        if(IP.find('.')!=-1){
            int count=0;
            while(IP.find('.')!=-1){
                auto x=IP.find('.');
                if(x>=4)return "Neither";
                string temp(IP.begin(),IP.begin()+x);
                if(temp.empty())return "Neither";
                if(temp.size()>1&&temp[0]=='0')return "Neither";
                int mt=0;
                for(size_t i=0;i<temp.size();i++){
                    if(temp[i]>'9'||temp[i]<'0')return "Neither";
                    mt=mt*10+temp[i]-'0';
                }
                if(mt>255)return "Neither";
                count++;
                IP=IP.substr(x+1);
            }
            if(count==3){
                if(IP.empty())return "Neither";
                if(IP.size()>1&&IP[0]=='0')return "Neither";
                int mt=0;
                for(size_t i=0;i<IP.size();i++){
                    if(IP[i]>'9'||IP[i]<'0')return "Neither";
                    mt=mt*10+IP[i]-'0';
                }
                if(mt>255)return "Neither";
                return "IPv4";
            }else return "Neither";
        }
        else if(IP.find(':')!=-1){
            int count=0;
            while(IP.find(':')!=-1){
                auto x=IP.find(':');
                if(x>4)return "Neither";
                string temp(IP.begin(),IP.begin()+x);
                if(temp.empty())return "Neither";
                for(size_t i=0;i<temp.size();i++){
                    if(!((temp[i]>='0'&&temp[i]<='9')||(temp[i]>='a'&&temp[i]<='f')||(temp[i]>='A'&&temp[i]<='F')))return "Neither";
                }
                count++;
                IP=IP.substr(x+1);
            }
            if(count==7){
                if(IP.size()>4)return "Neither";
                for(size_t i=0;i<IP.size();i++){
                    if(!((IP[i]>='0'&&IP[i]<='9')||(IP[i]>='a'&&IP[i]<='f')||(IP[i]>='A'&&IP[i]<='Z')))return "Neither";
                }
                return "IPv6";
            }else return "Neither";
        }
        else return "Neither";
    }
};//3ms but this code is so terrible
