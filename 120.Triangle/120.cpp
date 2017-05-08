class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //dfs is a bad way totally
        //try dp
        int n=triangle.size();
        vector<vector<int>> dp=triangle;
        for(int i=0;i<n;i++){
            if(i==0){
                continue;
            }
            else{
                for(int j=0;j<dp[i].size();j++){
                    if(j==0)dp[i][j]+=dp[i-1][j];
                    else if(j==dp[i].size()-1)dp[i][j]+=dp[i-1][j-1];
                    else{
                        dp[i][j]+=min(dp[i-1][j-1],dp[i-1][j]);
                    }
                }
            }
        }
        int ret=INT_MAX;
        for(int i=0;i<dp[n-1].size();i++){
            ret=min(ret,dp[n-1][i]);
        }
        return ret;
    }
};// well O(n^2)capacity can't get bonus :(
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //dfs is a bad way totally
        //try dp
        //firstly O(n^2)capacity
        /*
        int n=triangle.size();
        vector<vector<int>> dp=triangle;
        for(int i=0;i<n;i++){
            if(i==0){
                continue;
            }
            else{
                for(int j=0;j<dp[i].size();j++){
                    if(j==0)dp[i][j]+=dp[i-1][j];
                    else if(j==dp[i].size()-1)dp[i][j]+=dp[i-1][j-1];
                    else{
                        dp[i][j]+=min(dp[i-1][j-1],dp[i-1][j]);
                    }
                }
            }
        }
        int ret=INT_MAX;
        for(int i=0;i<dp[n-1].size();i++){
            ret=min(ret,dp[n-1][i]);
        }
        return ret;
        */
        int n = triangle.size();
        vector<int> minlen(triangle.back());
        for (int layer = n-2; layer >= 0; layer--){ // For each layer
            for (int i = 0; i <= layer; i++){ // Check its every 'node'
                // Find the lesser of its two children, and sum the current value in the triangle with it.
                minlen[i] = min(minlen[i], minlen[i+1]) + triangle[layer][i]; 
            }
        }
        return minlen[0];
    }
};
