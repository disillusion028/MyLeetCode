/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/interleaving-positive-and-negative-numbers
@Language: C++
@Datetime: 17-01-11 03:00
*/

class Solution {
public:
    /**
     * @param A: An integer array.
     * @return: void
     */
    void rerange(vector<int> &A) {
        // write your code here
        int countP=0,countN=0;
        for(auto i:A){
            if(i<0)countN++;
            else countP++;
        }
        if(countN>countP){
            if(countN-countP>1)return;
            for(int i=0;i<A.size();i++){
                if(i%2==0){
                    if(A[i]>0){
                        int j=i+1;
                        for(;j<A.size();j++){
                            if(A[j]<0&&j%2==1)break;
                        }
                        swap(A[i],A[j]);
                    }
                }
                else{
                    if(A[i]<0){
                        int j=i+1;
                        for(;j<A.size();j++){
                            if(A[j]>0&&j%2==0)break;
                        }
                        swap(A[i],A[j]);
                    }
                }
            }
        }
        else{
            if(countP-countN>1)return;
                for(int i=0;i<A.size();i++){
                if(i%2==0){
                    if(A[i]<0){
                        int j=i+1;
                        for(;j<A.size();j++){
                            if(A[j]>0&&j%2==1)break;
                        }
                        swap(A[i],A[j]);
                    }
                }
                else{
                    if(A[i]>0){
                        int j=i+1;
                        for(;j<A.size();j++){
                            if(A[j]<0&&j%2==0)break;
                        }
                        swap(A[i],A[j]);
                    }
                }
            }
        }
    }
};