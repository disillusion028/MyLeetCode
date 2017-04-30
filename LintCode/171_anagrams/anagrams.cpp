/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/anagrams
@Language: C++
@Datetime: 16-11-29 06:41
*/

class Solution {
public:    
    /**
     * @param strs: A list of strings
     * @return: A list of strings
     */
    vector<string> anagrams(vector<string> &strs) {
        // write your code here
        vector<string> B=strs;
        vector<string> ret;
        vector<int> Flag;
        for(int i=0;i<B.size();i++){
            sort(B[i].begin(),B[i].end());
            Flag.push_back(0);
        }
        for(int i=0;i<B.size();i++){
            for(int j=0;j<B.size();j++){
                if((i!=j)&&(B[i]==B[j])){
                    Flag[i]=1;
                    Flag[j]=1;
                }
            }
        }
        
        for(int i=0;i<strs.size();i++){
            if(Flag[i]==1) ret.push_back(strs[i]);
        }
        return ret;
    }
};
