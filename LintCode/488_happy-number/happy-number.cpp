/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/happy-number
@Language: C++
@Datetime: 16-10-27 08:24
*/

class Solution {
public:
    /**
     * @param n an integer
     * @return true if this is a happy number or false
     */
    bool isHappy(int n) {
        // Write your code here
        return doHappy(n);
    }
    bool doHappy(int n){
        int i=7;/* how much is this i???*/
        while(i--){
        vector<int> va;
        while(n != 0){
            int i = n%10;
            va.push_back(i);
            n = n/10;
        }
        for(auto j : va){
            n += j * j;
        }
        if(n==1) return true;
        }
        return false;
    }
};

    

