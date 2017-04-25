class Solution {
public:
    map<string,bool>mymap;
    vector<bool>isUsed;
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        int sum=(1+maxChoosableInteger)*maxChoosableInteger/2;
        if(sum<desiredTotal)return false;
        if(desiredTotal<=0)return true;
        isUsed.resize(maxChoosableInteger+1);
        return helper(desiredTotal);
    }
    bool helper(int desiredTotal){
        if(desiredTotal<=0)return false;
        string usedstr=formater(isUsed);
        auto iter=mymap.find(usedstr);
        if(iter==mymap.end()){
            for(size_t i=1;i<isUsed.size();i++){
                if(!isUsed[i]){
                    isUsed[i]=true;
                    if(!helper(desiredTotal-i)){
                        mymap.insert(pair<string,bool>(usedstr,true));
                        isUsed[i]=false;
                        return true;
                    }
                    isUsed[i]=false;
                }
            }
            mymap.insert(pair<string,bool>(usedstr,false));
        }
        return mymap.find(usedstr)->second;
    }
    string formater(vector<bool>&isUsed){
        string ret;
        for(size_t i=1;i<isUsed.size();i++){
            if(isUsed[i]==false)ret+="0";
            else ret+="1";
        }
        return ret;
    }
};//1125ms
