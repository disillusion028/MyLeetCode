class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        if(pairs.empty())return 0;
        sort(pairs.begin(),pairs.end(),[](vector<int> a,vector<int>b){
            if(a[1]!=b[1])return a[1]<b[1];
            else return a[0]<b[0];
        });
        int res=1;
        int now=pairs[0][1];
        for(int i=1;i<pairs.size();i++){
            if(pairs[i][0]>now){
                res++;
                now=pairs[i][1];
            }
        }
        return res;
    }
};
