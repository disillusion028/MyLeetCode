class Solution {
public:
vector<int> getFail(string pattern) {
    int m = pattern.size();
    vector<int> fail(m+1, 0);
    for(int t=1; t<m; t++) {
        int p=fail[t];
        while(p && pattern[p] != pattern[t]) p = fail[p];
        fail[t+1] = (pattern[p] == pattern[t]) ? p+1 : 0;
    }
    return fail;
}
    int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();
    if(m == 0) return 0;
    if(n == 0) return -1;
    vector<int> fail = getFail(needle);
    for(int t=0, p=0; t<n; t++) {
        while(p && haystack[t] != needle[p]) {
            p = fail[p];
        }
        if(haystack[t] == needle[p]) {
            p++;
        }
        if(p == m) return t-m+1;
    }
    return -1;
}
};
//KMP算法的思想是 对needle字符串的自匹配，维护一个needle字符串匹配不成功要跳转到哪儿的一个表格（跳转位置）。
