/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/product-of-array-exclude-itself
@Language: C++
@Datetime: 16-11-21 06:31
*/

class Solution {
public:
    /**
     * @param A: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        // write your code here
        long long temp=1;
        vector<long long> ret;
        /*
        *if(nums.size()==1){
        *    ret.push_back(0);
        *    return ret;
        *}
        */
        for(int i=0;i<nums.size();i++){
            temp=1;
            for(int j=0;j<nums.size();j++){
                if(j!=i) 
                {
                    temp=temp*nums[j];
                }
            }
            ret.push_back(temp);
        }
        return ret;
    }
};