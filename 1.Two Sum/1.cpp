class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mymap;
        for(int i=0;i<nums.size();i++){
            mymap[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(mymap[target-nums[i]]){
                return {mymap[target-nums[i]],i};
            }
        }
        return {-1,-1};
    }
};//9ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        if(nums.size()<=1)return ret;

        for(int i=0;i<nums.size()-1;i++){
  
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]==(target-nums[i])){
                    ret.push_back(i);
                    ret.push_back(j);
                    return ret;
                }
            }
        }
        return ret;
    }
};//696ms which I writed 6 months ago. hahaha
