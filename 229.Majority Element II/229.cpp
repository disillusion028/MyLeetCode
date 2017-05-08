class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // don't have any idea
        //oooops maybe I need a size==2 vector
        int sz=nums.size();
        vector<int>ret;
        unordered_map<int,int>mymap;
        for(int i=0;i<sz;i++){
            mymap[nums[i]]++;
        }
        for(auto i:mymap){
            if(i.second>sz/3)ret.push_back(i.first);
        }
        return ret;
    }
};
//first version using STL map,it is not an right way waste a lot of capacity

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // don't have any idea
        //oooops maybe I need a size==2 vector
        //ok ,using four number instead of two pair
        int t1,t2,n1=0,n2=0;  //numbers t1 and t2,votes' numbers n1,and n2.
        for(int i=0;i<nums.size();++i)
        {
            if(n1!=0&&t1==nums[i]){++n1;continue;} 
            if(n2!=0&&t2==nums[i]){++n2;continue;}
            if(n1==0){ t1=nums[i];++n1;continue;}
            if(n2==0){ t2=nums[i];++n2;continue;}
            --n1;--n2;
        }
        int z1=0,z2=0;
        for(int i=0;i<nums.size();++i)
        {
            if(n1>0){ if(nums[i]==t1) ++z1;}
            if(n2>0) {if(nums[i]==t2) ++z2;}
        }
        vector<int> ret;
         //check t1 and t2.
        if(z1>nums.size()/3) ret.push_back(t1);
        if(z2>nums.size()/3) ret.push_back(t2);
        return ret;
    }
};
