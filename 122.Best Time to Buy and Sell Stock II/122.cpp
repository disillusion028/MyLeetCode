class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ret=0;
        if(prices.size()<2)return ret;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<prices[i+1])ret+=prices[i+1]-prices[i];
        }
        return ret;
    }
};
