class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum=0;
        int zeroes=0;
        for(int& i:nums){
            sum+=i;
            if(i==0)zeroes++;
        }
        sort(nums.begin(),nums.end());
        int index=nums.size()-1;
        dfs(nums,index,S,sum);
        ret=ret*pow(2,zeroes);
        return ret;
    }
private:
    int ret=0;
    void dfs(vector<int>&nums,int index,int target,int sum){
        if(sum<abs(target)){
            return;
        }
        if(sum==abs(target)){
            ret+=1;
            return;
        }
        if(index<0)return;
        dfs(nums,index-1,target+nums[index],sum-nums[index]);
        dfs(nums,index-1,target-nums[index],sum-nums[index]);
    }
};
