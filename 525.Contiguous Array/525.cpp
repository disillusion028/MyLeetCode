class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mymap;
        mymap[0]=-1;
        int zeroes=0,ones=0;
        int ret=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeroes++;
            }
            else ones++;
            if(mymap.count(zeroes-ones)==1){
                ret=max(ret,i-mymap[zeroes-ones]);
            }else{
                mymap[zeroes-ones]=i;
            }
        }
        return ret;
    }
};
