/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/kth-largest-element
@Language: C++
@Datetime: 16-12-05 08:44
*/

class Solution {
public:
    /*
     * param k : description of k
     * param nums : description of array and index 0 ~ n-1
     * return: description of return
     */
    int kthLargestElement(int k, vector<int> nums) {
        // write your code here
        if(k>nums.size())return 0;
        int temp=k;
        int temp2;
        /*while(temp--){
            for(int i=1;i<nums.size();i++){
                if(nums[i-1]<nums[i]){
                    temp2=nums[i];
                    nums[i]=nums[i-1];
                    nums[i-1]=temp2;
                }
            }
        }*/
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
};