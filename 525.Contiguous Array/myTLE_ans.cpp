class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //TLE
        /*
        if(nums.empty())return 0;
        int ret=0;
        vector<int> t(nums.size());
        int b=0;
        for(int j=1;j<nums.size();j++){
            t[j-1]=((nums[j-1]==1)?1:-1);
            int temp=0;
            for(int i=j;i<nums.size();i++){
                t[i]=t[i-1]+((nums[i]==1)?1:-1);
                if(t[i]==0)temp=i;
            }
            if(temp!=0)ret=max(ret,temp-j+2);
        }
        return ret;
        */
        int sz=nums.size();
        int zeroes=0;
        for(int i:nums){
            if(i==0)zeroes++;
        }
        int ones=sz-zeroes;
        if(ones==zeroes)return sz;
        int target=min(zeroes,ones);
        if(target==0)return 0;
        int aim=(target==zeroes)?1:0;//our aim to remove
        int a,b;
        int i=0,j=sz-1;
        a=(aim==1)?ones:zeroes;
        b=(aim==1)?zeroes:ones;
        return search(a,b,aim,i,j,nums);
    }
    int search(int a,int b,int aim,int i,int j,vector<int>&nums){
        for(;i<j;){
            if(nums[i]==aim){
                i++;
                a--;
                if(a==b)return a+b;
            }
            else if(nums[j]==aim){
                j--;
                a--;
                if(a==b)return a+b;
            }
            else{
                return max(search(a,b-1,aim,i+1,j,nums),search(a,b-1,aim,i,j-1,nums));
            }
        }
        return a+b;
    }
