/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/wood-cut
@Language: C++
@Datetime: 16-12-07 09:22
*/

class Solution {
public:
    /** 
     *@param L: Given n pieces of wood with length L[i]
     *@param k: An integer
     *return: The maximum length of the small pieces.
     */
    int woodCut(vector<int> L, int k) {
        // write your code here
        if(L.empty()) return 0;

        long long Xmin=0;
        long long Xmax,sum=0;
        
        for(auto i:L){
           sum+=i;
        }
        Xmax=sum/k;
        if(Xmax<1)return 0;
        if(Xmax==1)return 1;
        long long Xmid=(Xmax+Xmin)/2;
        long long temp=0;
        while(Xmin<Xmax){
            temp=countofwood(L,Xmid);
            if(temp>k){
                Xmin=Xmid+1;
            }
            else if(temp<k) {
                Xmax=Xmid;
            }
            else if(temp==k) {
                Xmin=Xmid+1; 
                Xmid=(Xmax+Xmin)/2;
                while(Xmin<Xmax){
                    temp=countofwood(L,Xmid);
                    if(temp==k){
                        Xmin=Xmid+1;
                    }
                    else Xmax=Xmid;
                    Xmid=(Xmax+Xmin)/2;
                }
                return Xmid-1;
            }
            Xmid=(Xmax+Xmin)/2;
        }
        if(Xmid!=0)return Xmid-1;
        else return 0;
    }
    long long countofwood(vector<int> L,long long X){
        long long ret=0;
        for(auto i:L){
            ret=ret+i/X;
        }
        return ret;
    }
};