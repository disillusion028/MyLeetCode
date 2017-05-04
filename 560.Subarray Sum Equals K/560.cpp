class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //firstly, it exists an O(n^2) algorithm
        //let's have a try
        int ret=0;
        vector<int>sum(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            sum[i]+=nums[i];
            if(i!=0){sum[i]+=sum[i-1];}
        }
        for(int x=0;x<nums.size();x++){
            for(int i=x;i<nums.size();i++){
                if(sum[i]==k){ret++;}
                sum[i]=sum[i]-nums[x];
            }
        }
        return ret;
    }
};//629ms,truly bad
