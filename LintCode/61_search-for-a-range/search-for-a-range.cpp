/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/search-for-a-range
@Language: C++
@Datetime: 16-11-28 13:39
*/

class Solution {
    /** 
     *@param A : an integer sorted array
     *@param target :  an integer to be inserted
     *return : a list of length 2, [index1, index2]
     */
public:
    vector<int> searchRange(vector<int> &A, int target) {
        // write your code here
        if(A.empty())return {-1,-1};
        vector<int> ret;
        int beg=0,end=A.size();
        int mid=beg+(end-beg)/2;
        while(mid!=end&&A[mid]!=target){
            if(target<A[mid]) 
            end=mid;
            else
            beg=mid+1;
            mid=beg+(end-beg)/2;
        }
        if(A[mid]==target){
            int temp=mid;
            while(temp>=0&&A[temp]==target)temp--;
            ret.push_back(temp+1);
            temp=mid;
            while(temp<A.size()&&A[temp]==target)temp++;
            ret.push_back(temp-1);
            return ret;
        }
        return {-1,-1};
    }
};