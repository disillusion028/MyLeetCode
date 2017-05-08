class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int last_zero = -1;
        for(int i = 0; i < nums.size(); i++){
              if(nums[i] == 0 && last_zero == -1){
                  last_zero = i;
              }
              else if(nums[i] != 0 && last_zero != -1){
                  swap(nums[i], nums[last_zero]);
                  last_zero++;
              }
        }
    }
};//16ms
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                int j=0;
                for(j=i+1;j<nums.size();j++){
                    if(nums[j]!=0){break;}
                }
                if(j==nums.size())break;
                swap(nums[i],nums[j]);
            }
        }
    }
};//36ms
//don't be satisfied with your ugly code,ok?
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        fill(remove(nums.begin(),nums.end(),0),nums.end(),0);
    }
};//16ms
//STL fill and remove is useful and should know how it works.(move())
