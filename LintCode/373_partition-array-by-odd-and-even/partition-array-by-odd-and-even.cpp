/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/partition-array-by-odd-and-even
@Language: C++
@Datetime: 16-11-21 03:41
*/

class Solution {
public:
    /**
     * @param nums: a vector of integers
     * @return: nothing
     */
    void partitionArray(vector<int> &nums) {
        // write your code here
        auto b=nums.begin();
        auto a=b;
        vector<int> nums2;
        while(a!=nums.end()){
            if((*a)%2==0){
                nums2.push_back(*a);
                b=nums.erase(a);
                
                a=b;
            }
            else a++;
        }
        for(auto i:nums2){
            nums.push_back(i);
        }
    }
};