/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/3sum
@Language: C++
@Datetime: 17-02-28 11:34
*/

class Solution {
public:    
    /**
     * @param numbers : Give an array numbers of n integer
     * @return : Find all unique triplets in the array which gives the sum of zero.
     */
    vector<vector<int> > threeSum(vector<int> &nums) {
        // write your code here
        sort(nums.begin(),nums.end());
        int hashtable[400001]={0};
        vector<vector<int> > ret;
        for(int i=0;i<nums.size();i++){
            hashtable[nums[i]+200000]++;
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++){
                hashtable[nums[i]+200000]--;
                hashtable[nums[j]+200000]--;
                int k=0-nums[i]-nums[j];
                if(hashtable[k+200000]>0){
                    vector<int> vec={nums[i],nums[j],k};
                    sort(vec.begin(),vec.end());
                    ret.push_back(vec);
                }
                hashtable[nums[i]+200000]++;
                hashtable[nums[j]+200000]++;
            }
        }
        //ĺťé
        auto b=ret.begin();
        //auto t=ret.begin()+1;
        
        while(b!=ret.end()){
            for(auto t=b+1;t!=ret.end();){
                if(isSame(*b,*t)){
                t=ret.erase(t);
                }
                else t++;
            }
            b++;
        }
        return ret;
    }
    bool isSame(vector<int> a,vector<int> b){
        if((a[0]==b[0])&&(a[1]==b[1])) return true;
        return false;
    }
};
