/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/median
@Language: C++
@Datetime: 16-11-08 12:21
*/

class Solution {
public:
    /**
     * @param nums: A list of integers.
     * @return: An integer denotes the middle number of the array.
     */
    int median(vector<int> &nums) {
        // write your code here
        sort(nums.begin(),nums.end());
        int size=nums.size();
        return nums[(size-1)/2];
    }
};
