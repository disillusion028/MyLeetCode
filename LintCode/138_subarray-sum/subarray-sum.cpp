/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/subarray-sum
@Language: C++
@Datetime: 16-11-24 03:36
*/

class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number 
     *          and the index of the last number
     */
    vector<int> subarraySum(vector<int> nums){
        // write your code here
        int sum=0;
        int i,j,p;
        for(i=0;i<nums.size();i++){
            sum=0;
            for(j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==0) break;
            }
            if(sum==0) break;
        }
        vector<int> ret;
        if(sum!=0) return ret;
        
        ret.push_back(i);
        ret.push_back(j);
        return ret;
    }
};