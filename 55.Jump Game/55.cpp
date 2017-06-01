class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.empty())return false;
        const int INF=0x3f3f3f3f;
        vector<int> v(nums.size(),INF);
        v[0]=0;
        int jump=1;
        int flag;
        for(int i=0;i<nums.size();i+=jump){
            int x=nums[i];
            int y=x;
            flag=0;
            for(int j=i+1;(j<=i+x)&&(j<nums.size());j++){
                y--;
                v[j]=min(v[i]+1,v[j]);
                if(j==nums.size()-1)goto ret;
                if(nums[j]>y&&flag==0){jump=j-i;flag=1;}
            }
        }
        ret:if(v[nums.size()-1]==INF)return false;
        return true;
    }
};
//我先做了jump game2 ,然后直接套在1上面用了，发现效果还不错？
