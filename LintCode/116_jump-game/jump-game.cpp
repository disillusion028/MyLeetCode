/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/jump-game
@Language: C++
@Datetime: 16-12-09 09:05
*/

class Solution {
public:
    /**
     * @param A: A list of integers
     * @return: The boolean answer
     */
    bool canJump(vector<int> A) {
        // write you code here
        if(A.size()<1)return true;
        int temp=1;
        
        for(int i=A.size()-1;i>=0;i--){
            temp--;
            if(A[i]+temp>=0)temp=0;
        }
        if(temp<0)return false;
        else return true;
    }
};
