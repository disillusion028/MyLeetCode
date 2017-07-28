class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> myset;
        vector<int> res;
        if(nums.empty())return res;
        for(int i=0;i<nums.size();i++){
            if(myset.count(nums[i])){
                res.push_back(nums[i]);
            }
            myset.insert(nums[i]);
        }
        for(int i=1;i<=nums.size();i++){
            if(!myset.count(i))res.push_back(i);
        }
        return res;
    }
};
