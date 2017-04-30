/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/longest-words
@Language: C++
@Datetime: 16-11-04 08:20
*/

class Solution {
public:
    /**
     * @param dictionary: a vector of strings
     * @return: a vector of strings
     */
    vector<string> longestWords(vector<string> &dictionary) {
        // write your code here
        vector<string> ret;
        int leng=0;
        if(dictionary.empty()){
            return ret;
        }
        for(auto a:dictionary){
            if(a.size()>leng){
                leng=a.size();
                ret.clear();
                ret.push_back(a);
            }
            else if(a.size()==leng){
                ret.push_back(a);
            }
            else if(a.size()<leng);
        }
        return ret;
    }
};