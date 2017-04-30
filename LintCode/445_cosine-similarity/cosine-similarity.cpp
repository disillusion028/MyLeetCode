/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/cosine-similarity
@Language: C++
@Datetime: 16-10-13 02:40
*/

class Solution {
public:
    /**
     * @param A: An integer array.
     * @param B: An integer array.
     * @return: Cosine similarity.
     */
    double cosineSimilarity(vector<int> A, vector<int> B) {
        // write your code here
        int flagA=0,flagB=0;
        for(int i=0;i!=A.size();i++){
            if(A[i]!=0) flagA=1;
            if(B[i]!=0) flagB=1;
        }
        if(flagA==0||flagB==0) return 2.0;
      
        double ret=0;
        double temp1=0,temp2=0,temp3=0;
        for(int i=0;i!=A.size();i++){
            temp1=temp1+A[i]*B[i];
            temp2=A[i]*A[i]+temp2;
            temp3=B[i]*B[i]+temp3;
        }
        temp2=sqrt(temp2);
        temp3=sqrt(temp3);
        temp2=temp2*temp3;
        temp1=temp1/temp2;
        return temp1;
    }
};
