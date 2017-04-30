/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/combinations
@Language: C++
@Datetime: 17-02-15 08:15
*/

class Solution {
public:
    /**
     * @param n: Given the range of numbers
     * @param k: Given the numbers of combinations
     * @return: All the combinations of k numbers out of 1..n
     */
    vector<vector<int>> ret;
    int a[10001]={0};
    bool b[10001]={0};
 
    int search(int n,int q,int k){
        for(int i=1;i<=n;i++){
            if(a[q-1]<i){
            if(!b[i]){
                b[i]=1;
                a[q]=i;
                
                if(q==k){
                    vector<int> temp;
                    for(int j=1;j<=k;j++){
                        temp.push_back(a[j]);
                    }
                    ret.push_back(temp);
                }else search(n,q+1,k);
                b[i]=0;
                
            }
            }
        }
        return 0;
    }
    vector<vector<int> > combine(int n, int k) {
        // write your code here
        search(n,1,k);
        return ret;
        
    }
};