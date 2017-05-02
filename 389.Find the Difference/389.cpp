class Solution {
public:
    char findTheDifference(string s, string t) {
        char hashtable1[26]={0};
        char hashtable2[26]={0};
        for(int i=0;i<s.length();i++){
            hashtable1[s[i]-'a']++;
            hashtable2[t[i]-'a']++;
        }
        hashtable2[t[t.size()-1]-'a']++;
        for(int i=0;i<26;i++){
            if(hashtable1[i]!=hashtable2[i])return i+'a';
        }
        return NULL;
    }
};
