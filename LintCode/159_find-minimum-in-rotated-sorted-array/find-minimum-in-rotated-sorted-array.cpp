/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/find-minimum-in-rotated-sorted-array
@Language: C++
@Datetime: 16-11-28 12:10
*/

class Solution {
public:
    /**
     * @param nums: a rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> &nums) {
        // write your code here
        if(nums.empty())return 0;
        int temp=nums[0];
        for(int i=1;i!=nums.size();i++){
            if(nums[i]<nums[i-1]) temp=nums[i];
        }
        return temp;
    }
};