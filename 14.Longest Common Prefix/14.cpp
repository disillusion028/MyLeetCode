class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret;
        if(strs.empty())return ret;
        ret=strs[0];
        for(int i=1;i<strs.size();i++){
            ret=makepre(ret,strs[i]);
        }
        return ret;
    }
    string makepre(string pre,string s){
        int sz=min(pre.size(),s.size());
        string ret;
        for(int i=0;i<sz;i++){
            if(pre[i]==s[i]){
                ret+=pre[i];
            }else break;
        }
        return ret;
    }
};
