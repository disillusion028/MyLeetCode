 对于 [494.target sum](https://leetcode.com/problems/target-sum/#/description) 这种问题，我们将它转换成为另一个问题之后，发现这是一个典型的0-1背包问题，在阅读了[Tianyi Cui](https://github.com/tianyicui)总结的8种背包问题之后(并没有理解到...)还是有一些晕晕的。
 ```c++
 #include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    template <typename T>
    vector<T> subsetSum(vector<T> &nums,T target){
        vector<T>dp(target+1);
        dp[0]=1;
        for(int i=0;i<nums.size();i++){
            for(int j=target;j>=nums[i];j--){
                dp[j]=dp[j]+dp[j-nums[i]];
            }
            for(auto i:dp){
                cout<<i<<"  ";
            }
            cout<<endl;
        }
        return dp;
    }
};
int main(){
    Solution a;
    vector<int> nums={6,5,4,3,2,1};
    int target=7;
    vector<int> ret=a.subsetSum(nums,target);
    return 0;
}
 ```   
 dp[x] 存放的信息是目标为x时，我们有几种在nums中选择数字的方式（每个元素只选择一个），也就是有几种不重复数字的解法，而当代码改为：
 ```c++
            for(int j=nums[i];j<=target;j++){
                dp[j]=dp[j]+dp[j-nums[i]];
            }
 ```   
这种遍历方法所求的问题就变为可以选择任意个的该元素（每个元素可以选择无限个）。 interesting！
