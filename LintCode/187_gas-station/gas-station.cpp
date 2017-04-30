/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/gas-station
@Language: C++
@Datetime: 16-12-02 07:17
*/

class Solution {
public:
    /**
     * @param gas: a vector of integers
     * @param cost: a vector of integers
     * @return: an integer 
     */
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        // write your code here
        int temp=0,hlp=0,sum=0;
        for(int i=0;i<gas.size();i++){
            sum+=gas[i]-cost[i];
            if(temp+gas[i]-cost[i]>=0){
                temp=temp+gas[i]-cost[i];
                
            }
            else
            {
                temp=0;
                hlp=i+1;
            }
        }
        if(sum>=0&&hlp<gas.size())return hlp;
        else return -1;
    }
};