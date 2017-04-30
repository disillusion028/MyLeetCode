/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/remove-duplicates-from-sorted-array
@Language: C++
@Datetime: 16-11-24 03:51
*/

class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        if(nums.size()<=1) return nums.size();
        auto i=nums.begin();
        i++;
        while(i!=nums.end()){
            if((*i)==(*(i-1))){

                i=nums.erase(i);
            }
            else{
               
                i++;
            }
        }
        return nums.size();
    }
};