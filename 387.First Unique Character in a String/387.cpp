class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> V(26,0);
        for(const char &i:s){
            V[i-97]++;
        }
        for(int j=0;j<s.size();j++){
            if(V[s[j]-97]==1) return j;
        }
        return -1;
    }
};
