/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/wiggle-sort
@Language: C++
@Datetime: 17-02-13 06:12
*/

class Solution {
public:
    /**
     * @param nums a list of integer
     * @return void
     */  
    void wiggleSort(vector<int>& nums) {
        // Write your code here
        if(nums.size()<=1)return;
        
        sort(nums.begin(),nums.end());
        if(nums.size()==2)return;
        for(int i=1;i<nums.size()-1;i=i+2){
            swap(nums[i],nums[i+1]);
        }
        return;
    }
};