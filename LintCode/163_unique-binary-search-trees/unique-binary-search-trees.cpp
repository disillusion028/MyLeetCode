/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/unique-binary-search-trees
@Language: C++
@Datetime: 16-11-29 06:40
*/

class Solution {
public:
    /**
     * @paramn n: An integer
     * @return: An integer
     */
    int numTrees(int n) {
        // write your code here
        vector<int> v(1000,0);
        if(n==0)return 1;
        if(n==1)return 1;
        return Func(v,n);
    }
    int Func(vector<int> &v,int n){
        if(n==0)return 1;
        if(n==1)return 1;
        int ret=0;
        if(v[n]!=0)return v[n];
        for(int i=0;i<n;i++){
            ret=ret+Func(v,i)*Func(v,n-i-1);
        }
        v[n]=ret;
        return v[n];
    }
};