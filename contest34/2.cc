class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        //using map???
        unordered_map<string,int> tb1;
        for(int i=0;i<list1.size();i++){
            tb1[list1[i]]=i;
        }
        vector<pair<int,int>>od;
        for(int i=0;i<list2.size();i++){
            if(tb1.count(list2[i])){
                int order=tb1[list2[i]]+i;
                od.push_back({i,order});
            }
        }
        int x=INT_MAX;
        for(int i=0;i<od.size();i++){
            x=min(od[i].second,x);
        }
        vector<int> retorder;
        for(int i=0;i<od.size();i++){
            if(od[i].second==x)retorder.push_back(od[i].first);
        }
        vector<string> ret;
        for(int i=0;i<retorder.size();i++){
            ret.push_back(list2[retorder[i]]);
        }
        return ret;
    }
};
