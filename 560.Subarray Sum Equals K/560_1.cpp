class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mymap;
        mymap[0]=1;
        int sum=0,ret=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mymap[sum-k]){
                ret+=mymap[sum-k];
            }
            mymap[sum]++;
        }
        return ret;
    }
};//42ms, common way to use hash,get used to it now
