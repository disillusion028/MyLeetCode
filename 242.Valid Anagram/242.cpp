class Solution {
public:
    bool isAnagram(string s, string t) {
        char hashtable1[26]={0};
        char hashtable2[26]={0};
        if(s.size()!=t.size())return false;
        for(int i=0;i<s.size();i++){
            hashtable1[s[i]-'a']++;
            hashtable2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hashtable1[i]!=hashtable2[i])return false;
        }
        return true;
    }
};
