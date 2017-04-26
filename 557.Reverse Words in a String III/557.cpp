class Solution {
public:
    string reverseWords(string s) {
        int start=0,end=s.size()-1;int temp=0;
        while(start<=end){
            if(s[start]==' '){
                reverse(s.begin()+temp,s.begin()+start);
                temp=start+1;
            }
            start++;
        }
        reverse(s.begin()+temp,s.end());
        return s;
    }
};//22ms only a little trivial with dealing the end of string.

