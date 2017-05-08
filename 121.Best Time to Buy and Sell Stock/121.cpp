class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int l=0,h=0;
        int ans=0;
        while(l+1<n){
            if(prices[l]>prices[l+1]){
                l++;
                continue;
            }else{
                h=l+1;
                while(h<n){
                    if(prices[h]<prices[l]){l=h;break;}
                    ans=max(ans,prices[h]-prices[l]);
                    h++;
                }
                l=h;
            }
        }
        return ans;
    }
};
