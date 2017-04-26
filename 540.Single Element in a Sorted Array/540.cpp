class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        int mid;
        while(1){
            if(start>=end)return nums[start];
            mid=start+((end-start)>>1);
            if(mid%2==0){
                if(nums[mid]!=nums[mid^1]){
                    end=mid;
                }else{
                    start=mid^1;
                }
            }
            else{
                if(nums[mid]!=nums[mid-1]){
                    end=mid;
                }
                else{
                    start=mid+1;
                }
            }
        }
    }
};//binary search
