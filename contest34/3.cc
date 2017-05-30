class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        // for each point ,dfs and if its length bigger than half of nums.size ,return 
        int ret=0;
        int sz=nums.size();
        for(int i=0;i<sz;i++){
            ret=max(ret,dfs(nums,i));
            if(ret>(sz/2))return ret;
        }
        return ret;
    }
    int dfs(vector<int>&nums,int beginid){
        int t=nums[beginid];
        if(t==beginid)return 1;
        int cn=2;
        while(1){
            int x=nums[t];
            if(x==beginid)break;
            cn++;
            t=x;
        }
        return cn;
    }
};//我擦，原来别人的代码跑这么快，当时ac了还以为没啥问题呢！

//someone's code
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int i, j, k, count, maxS = 0;
        
        for (i = 0; i < nums.size(); ++i) {
            count = 0;
            j = i;
            
            while (j < nums.size() && nums[j] != -1) {
                k = j;
                j = nums[j];
                nums[k] = -1;
                ++count;
                maxS = max(maxS, count);
            }
        }
        
        return maxS;
    }
};
