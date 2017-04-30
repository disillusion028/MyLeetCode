/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/next-permutation
@Language: C++
@Datetime: 16-12-13 09:38
*/

class Solution {
public:
    /**
     * @param nums: An array of integers
     * @return: An array of integers that's next permuation
     */
    vector<int> nextPermutation(vector<int> &nums) {
        // write your code here
        if(nums.size()<=1)return nums;
        int i=nums.size()-1;
        for(;i>0;i--){
            if(nums[i]>nums[i-1])break;
        }
        if(i==0){
            sort(nums.begin(),nums.end());
            return nums;
        }
        //swap(nums[i-1],nums[i]);
        int temp=nums[i];
        int temp2=i;
        int j=i;
        for(;j<nums.size();j++){
            if((nums[j]<temp)&&(nums[j]>nums[i-1])){
                temp=nums[j];temp2=j;
            }
        }
        swap(nums[i-1],nums[temp2]);
        sort(nums.begin()+i,nums.end());
        return nums;
    }
};