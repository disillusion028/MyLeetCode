/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/longest-common-substring
@Language: C++
@Datetime: 16-11-23 08:53
*/

class Solution {
public:    
    /**
     * @param A, B: Two string.
     * @return: the length of the longest common substring.
     */
    int longestCommonSubstring(string &A, string &B) {
        // write your code here
        int max=0;
        int temp=0;
        int p,q;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++){
                p=i;q=j;
                temp=0;
                while((A[i]==B[j])&&(i<A.size())&&(j<B.size())){
                    temp++;
                    i++;
                    j++;
                }
                i=p;j=q;
                if(temp>max) max=temp;
            }
        }
        return max;
    }
};
