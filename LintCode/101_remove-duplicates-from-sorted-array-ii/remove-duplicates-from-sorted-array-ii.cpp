/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/remove-duplicates-from-sorted-array-ii
@Language: C++
@Datetime: 16-11-25 03:56
*/

class Solution {
public:
    /**
     * @param A: a list of integers
     * @return : return an integer
     */
    int removeDuplicates(vector<int> &nums) {
        // write your code here
        int hashtable[400001]={0};
        vector<int> ret;
        for(auto i:nums){
            i+=200000;
            hashtable[i]++;
        }
        for(int i=0;i<400001;i++){
            if(hashtable[i]>0){
                if(hashtable[i]>2) hashtable[i]=2;
                while(hashtable[i]--){
                    ret.push_back(i-200000);
                }
            }
        }
        nums=ret;
        return nums.size();
        
    }
};