/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/first-position-of-target
@Language: C++
@Datetime: 16-10-13 08:42
*/

class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
    int binarySearch(vector<int> &array, int target) {
        // write your code here
        int beg=0,end=array.size();
        int mid=beg+(end-beg)/2;
        while(mid!=end&&array[mid]!=target){
            if(target<array[mid]) 
            end=mid;
            else
            beg=mid+1;
            mid=beg+(end-beg)/2;
        }
        if(array[mid]==target) {
            while(mid>0&&array[mid-1]==target) mid--;
            return mid;
        }
        return -1;
    }
    
};