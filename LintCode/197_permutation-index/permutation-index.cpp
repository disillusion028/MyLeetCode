/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/permutation-index
@Language: C++
@Datetime: 16-12-06 04:43
*/

class Solution {
public:
    /**
     * @param A an integer array
     * @return a long integer
     */
    long long permutationIndex(vector<int>& A) {
        // Write your code here
        
        vector<int> B=A;
        vector<long long> N;
        long long n=1;
        N.push_back(1);
        for(long long i=1;i<A.size();i++){
            n=n*i;
            N.push_back(n);
        }
        sort(B.begin(),B.end());
        long long order=0;
        for(int i=0;i<A.size();i++){
            int y=getIndex(B,A[i]);
            //if(y>=0&&y<=9);
            B[y]=0x7fffffff;
            order+=y*N[A.size()-1-i];
            sort(B.begin(),B.end());
        }
        return order+1;
    }
    int getIndex(vector<int> &B,int a){
        for(int i=0;i<B.size();i++){
            if(B[i]==a)return i;
        }
        return -1;
    }
};