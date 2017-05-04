class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>myset;
        for(auto i:nums){
            myset.insert(i);
        }
        auto iter=myset.rbegin();
        if(myset.size()<3){
            return *iter;
        }
        else {
            iter++;
            iter++;
            
            return *iter;
        }
    }
};//when using not random access container,it is not permit to using "*(iter+2)",using two iter++ instead.
