/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/maximum-subarray
@Language: C++
@Datetime: 16-11-09 08:36
*/

class Solution {
public:    
    /**
     * @param nums: A list of integers
     * @return: A integer indicate the sum of max subarray
     */
    int maxSubArray(vector<int> nums) {
        // write your code here
        if(nums.size()==1) return nums[0];
        int max=nums[0];
        int j=0;
        int sub=0;
        for(int i=0;i<nums.size();i++){
            sub+=nums[i];
            if(sub<0) sub=0;
            if(sub>max) max=sub;
        }
        if(max==0) {
            max=nums[0];
            for(auto i:nums){
                if(max<i) max=i;
            }
        }
        return max;
    }
};
