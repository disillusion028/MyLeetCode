/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/longest-common-prefix
@Language: C++
@Datetime: 16-11-23 09:13
*/

class Solution {
public:    
    /**
     * @param strs: A list of strings
     * @return: The longest common prefix
     */
    string longestCommonPrefix(vector<string> &strs) {
        // write your code here
        int samenum=0;
        int flag=1;
        if(strs.empty()) return "";
        if(strs.size()==1)return strs[0];
        int i;
        for(i=0;i<strs[0].size();i++){
            flag=1;
            for(int j=strs.size()-1;j>=1;j--){
                if(strs[j][i]!=strs[j-1][i]) flag=0;
            }
            if(flag==0) {
                break;
            }
        }
        samenum=i;
        if(i==0)return "";
        string ret;
        int count=0;
        while(samenum--){
            ret+=strs[0][count++];
        }
        return ret;
    }
};