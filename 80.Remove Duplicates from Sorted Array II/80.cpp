class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=INT_MAX,count=0,flag=0;
        for(int i=0;i<nums.size();i++){
            if(x==nums[i]&&flag==0){
                count++;
                flag=1;
            }
            else if(x==nums[i]&&flag==1){
                nums.erase(nums.begin()+i);
                i=i-1;
            }
            else if(x!=nums[i]){
                flag=0;
                x=nums[i];
                count++;
            }
        }
        return count;
    }
};
