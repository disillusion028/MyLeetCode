class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::iterator it, start=nums.begin(), it_rem;
        unordered_map<int,int> m;
        vector<int> result;
          
        for(it=nums.begin();it!=nums.end();it++){
            int num=*it;
            int rem=target-num;
     
            if(m[rem]==1){
                it_rem=find(nums.begin(), nums.end(), rem);
                result.push_back(it_rem - start);
                result.push_back(it - start);
                return result;
            }
            else{
               m[num]=1;
            }
        }
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        if(nums.size()<=1)return ret;

        for(int i=0;i<nums.size()-1;i++){
  
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]==(target-nums[i])){
                    ret.push_back(i);
                    ret.push_back(j);
                    return ret;
                }
            }
        }
        return ret;
    }
};//696ms which I writed 6 months ago. hahaha
