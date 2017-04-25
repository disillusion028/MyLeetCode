class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //using hash table twice
        if(nums.size()<=1)return nums;
        vector<vector<int>> myvec(10000);
        vector<int> hashtable(20001,0);
        for(size_t i=0;i<nums.size();i++){
            hashtable[nums[i]+10000]++;
        }
        //using mset is totally O(nlogn)! how to make it better?
        //fu*k
        for(size_t i=0;i<20001;i++){
            if(hashtable[i]>0)myvec[hashtable[i]].push_back(i-10000);
        }
        vector<int>ret;
        for(int i=9999;i>=0;i--){
            if(k==0)break;
            for(int j=0;j<myvec[i].size();j++){
                ret.push_back(myvec[i][j]);
                k--;
                if(k==0)break;
            }
        }
        return ret;
    }
};//my ugly code,and I believe it is really not a good way
//using two hashtable
//29ms

