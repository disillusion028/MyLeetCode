/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/intersection-of-two-arrays
@Language: C++
@Datetime: 16-11-25 02:16
*/

class Solution {
public:
    /**
     * @param nums1 an integer array
     * @param nums2 an integer array
     * @return an integer array
     */
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Write your code here
        //if we know range of the numbers,
        //it is an easy way for us to using hash table
        // first way:  using sort and unique
        vector<int> ret;
        if(nums1.empty()||nums2.empty())return ret;
    
        sort(nums1.begin(),nums1.end());
        nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        sort(nums2.begin(),nums2.end());
        nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
        nums2.insert(nums2.begin(),nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        for(int i=0;i<nums2.size()-1;i++){
            if(nums2[i]==nums2[i+1]) ret.push_back(nums2[i]);
        }
        return ret;
    }
};