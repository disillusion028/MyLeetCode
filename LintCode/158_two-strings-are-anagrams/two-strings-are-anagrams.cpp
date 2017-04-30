/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/two-strings-are-anagrams
@Language: C++
@Datetime: 16-11-21 08:12
*/

class Solution {
public:
    /**
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */
    bool anagram(string s, string t) {
        // write your code here
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]) return false; 
        }
        return true;
    }
};