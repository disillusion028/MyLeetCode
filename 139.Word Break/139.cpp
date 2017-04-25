class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        if(wordDict.size()==0) return false;
        vector<bool> dp(s.size()+1,false);
        dp[0]=true;
        for(int i=1;i<=s.size();i++)
        {
            for(int j=i-1;j>=0;j--)//from i-1 to 0 is better than from 0 to i-1;
            {
                if(dp[j])
                {
                    string word = s.substr(j,i-j);
                    for(size_t k=0;k<wordDict.size();k++)
                    {
                        if(word==wordDict[k])
                        {
                            dp[i]=true;
                            break;
                        }
                    }
                }
            }
        }
        return dp[s.size()];
    }
};
