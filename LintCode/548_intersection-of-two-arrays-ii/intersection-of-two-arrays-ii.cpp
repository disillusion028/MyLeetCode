/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/intersection-of-two-arrays-ii
@Language: C++
@Datetime: 16-11-25 03:08
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
        vector<int> vret;
        int hashtable1[400002]={0};
        int hashtable2[400002]={0};
        for(auto i:nums1){
            i+=200000;
            hashtable1[i]++;
        }
        for(auto i:nums2){
            i+=200000;
            hashtable2[i]++;
        }
        for(int i=0;i<400001;i++){
            if(hashtable1[i]!=0&&hashtable2[i]!=0)
            {
                if(hashtable1[i]>hashtable2[i]){
                    while(hashtable2[i]--) vret.push_back(i-200000);
                }
                else {
                    while(hashtable1[i]--) vret.push_back(i-200000);
                }
            }
        }
        return vret;
    }
};