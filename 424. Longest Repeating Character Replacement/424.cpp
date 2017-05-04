class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> counts(26, 0);
        int start = 0;
        int maxCharCount = 0;
        int n = s.length();
        int result = 0;
        for(int i = 0; i < n; i++){
            counts[s[i]-'A']++;
            maxCharCount = max(maxCharCount,counts[s[i]-'A']);
            while(i-start-maxCharCount+1 > k){
                counts[s[start]-'A']--;
                start++;
            }
            result = max(result, i-start+1);
        }
        return result;
    }
};
