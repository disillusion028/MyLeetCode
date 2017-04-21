class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        //first,make sure if it could be solved
        if(s==0)return 0;
        int sum = 0;
        for(size_t i=0;i<nums.size();i++){sum+=nums[i];}
        if(sum<s)return 0;
        //from 1 to nums.size()
        int count=1;
        while(count<=nums.size()){
            int start=0;
            int end =0;
            sum=0;
            for(;end<nums.size();){
                if(end-start>=count){sum-=nums[start];start++;}
                sum+=nums[end];
                end++;
                if(sum>=s)return count;
            }
            count++;
        }
    }
};
//189ms O(n2) passed but not opt

