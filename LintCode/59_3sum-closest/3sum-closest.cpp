/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/3sum-closest
@Language: C++
@Datetime: 16-11-25 08:13
*/

class Solution {
public:    
    /**
     * @param numbers: Give an array numbers of n integer
     * @param target: An integer
     * @return: return the sum of the three integers, the sum closest target.
     */
    int threeSumClosest(vector<int> nums, int target) {
        // write your code here
        sort(nums.begin(),nums.end());
        int flag=0x7fffffff;
        int ret;
        int temp,temp2;
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=j+1;k<nums.size();k++){
                    temp=nums[i]+nums[j]+nums[k];
                    temp2=target-temp;
                    if(temp2<0)temp2=-temp2;
                    if(temp2<flag){
                        flag=temp2;
                        ret=temp;
                    }
                }
            }
        }
        return ret;
    }
};
