class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //using sort is not good
        // a O(n) time with O(n) capacity is also not the best way
        vector<int> aaa(nums.size()+1,0);
        for(size_t i=0;i<nums.size();i++){
            aaa[nums[i]]=1;
        }
        vector<int> ret;
        for(size_t i=1;i<=nums.size();i++){
            if(aaa[i]==0)ret.push_back(i);
        }
        return ret;
    }
};
//not good because of capacity

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        for(int i=0; i<len; i++) {
            int m = abs(nums[i])-1; // index start from 0
            nums[m] = nums[m]>0 ? -nums[m] : nums[m];
        }
        vector<int> res;
        for(int i = 0; i<len; i++) {
            if(nums[i] > 0) res.push_back(i+1);
        }
        return res;
    }
};
