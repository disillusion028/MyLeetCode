class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty())return -1;
        int start=0,end=nums.size()-1;
        return mysearch(nums,start,end,target);
    }
    int mysearch(vector<int>&nums,int start,int end,int target){
        int mid=(start+end)/2;
        if(nums[start]==target)return start;
        if(nums[end]==target)return end;
        if(nums[mid]==target)return mid;
        if(start>=end)return -1;
        if(nums[mid]<nums[start]){
            if(target<nums[mid]){
                return mysearch(nums,start,mid-1,target);
            }
            else if(target<nums[end]){
                return mysearch(nums,mid+1,end,target);
            }
            else return mysearch(nums,start,mid-1,target);
        }else{
            if(target>nums[mid]){
                return mysearch(nums,mid+1,end,target);
            }
            else if(target>nums[start])return mysearch(nums,start,mid-1,target);
            else return mysearch(nums,mid+1,end,target);
        }
        
    }
};//use binary search, 6ms
