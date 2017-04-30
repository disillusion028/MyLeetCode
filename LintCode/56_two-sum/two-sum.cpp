/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/two-sum
@Language: C++
@Datetime: 16-11-24 08:12
*/

class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        int flag=0;
        int i,j;
        for(i=0;i<nums.size()-1;i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    flag=1;break;
                }
            }
            if(flag==1) break;
        }
        vector<int> ret;
        if(flag==1){
        ret.push_back(i+1);
        ret.push_back(j+1);
        }
        return ret;
    }
};
