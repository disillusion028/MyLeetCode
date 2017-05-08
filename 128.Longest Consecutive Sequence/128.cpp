class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2)return nums.size();
        set<int> myset;
        
        for(int i=0;i<nums.size();i++){
            myset.insert(nums[i]);
        }
        auto b=myset.begin();
        int x=*b,y=0;
        b++;
        auto e=myset.end();
        int cur=1,ret=0;
        while(b!=e){
            y=*b;
            if(x+1==y){
                cur++;
                x=y;
                if(cur>ret)ret=cur;
            }
            else{
                x=y;
                cur=1;
            }
            b++;
        }
        if(ret==0)return 1;
        return ret;
    }
};
