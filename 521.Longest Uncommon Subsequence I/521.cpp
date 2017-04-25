class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b)return -1;
        int x=a.size();
        int y=b.size();
        return x>y?x:y;
    }
};//this question is so ... , a long description make me confused and don't know what it means.
