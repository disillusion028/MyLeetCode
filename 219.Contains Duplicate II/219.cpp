class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k==0)return false;
        set<int> numset;
        for(int i=0;i<nums.size();i++){
            if(i>k)numset.erase(nums[i-k-1]);
            if(!numset.insert(nums[i]).second)return true;
        }
        return false;
    }
};//42ms
// origin function with set,and it should be change to use unordered_set
