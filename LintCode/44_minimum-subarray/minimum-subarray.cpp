/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/minimum-subarray
@Language: C++
@Datetime: 16-11-17 08:48
*/

class Solution {
public:
    /**
     * @param nums: a list of integers
     * @return: A integer denote the sum of minimum subarray
     */
    int minSubArray(vector<int> nums) {
        // write your code here
        if(nums.size()==1) return nums[0];
        int min=nums[0];
        int j=0;
        int add=0;
        for(int i=0;i<nums.size();i++){
            add+=nums[i];
            if(add>0) add=0;
            if(add<min) min=add;
        }
        if(min==0){
            min=nums[0];
            for(auto i:nums){
                if(min>i)min=i;
            }
        }
        return min;
    }
};
