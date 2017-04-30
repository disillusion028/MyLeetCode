/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/majority-number
@Language: C++
@Datetime: 16-12-01 11:39
*/

class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: The majority number
     */
    int majorityNumber(vector<int> nums) {
        // write your code here
        int temp;
        int flag=1;
        if(nums.empty()) return -1;
        temp=nums[0];
        for(int i=1;i<nums.size();i++){
            if(temp==nums[i])flag++;
            else{
                flag--;
            }
            if(flag<0) {
                temp=nums[i];
                flag=1;
            }
        }
        if(flag>0) return temp;
        else return -1;
    }
};
