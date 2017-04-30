/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/partition-array
@Language: C++
@Datetime: 16-11-24 08:48
*/

class Solution {
public:
    int partitionArray(vector<int> &nums, int k) {
        // write your code here
        if(nums.empty())return 0;
        int i=0,j=nums.size()-1,temp;
        while(i<j){
            while((nums[i]<k)&&(i<j)){
                i++;
            }
            while((nums[j]>=k)&&(i<j)){
                j--;
            }
            if(i==j) break;
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
        if(nums[i]<k)i++;
        return i;
    }
};