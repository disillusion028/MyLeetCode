/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/move-zeroes
@Language: C++
@Datetime: 16-11-17 09:03
*/

class Solution {
public:
    /**
     * @param nums an integer array
     * @return nothing, do this in-place
     */
    void moveZeroes(vector<int>& nums) {
        // Write your code here
        int count=0;
        for(auto iter=nums.begin();iter!=nums.end();){
            if(*iter==0) {
                iter=nums.erase(iter);
                count++;
            }
            else iter++;
        }
        while(count--){
            nums.push_back(0);
        }
    }
};