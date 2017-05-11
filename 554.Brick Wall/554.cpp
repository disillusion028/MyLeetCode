class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        //firstly,there is a function using hashtable
        for(auto &i:wall){
            for(int j=1;j<i.size();j++){
                i[j]+=i[j-1];
            }
        }
        unordered_map<int,int>mymap;
        for(auto &i:wall){
            for(int j=0;j<i.size()-1;j++){
                mymap[i[j]]++;
            }
        }
        int max=0;
        for(auto i=mymap.begin();i!=mymap.end();i++){
            if((*i).second>max){
                max=(*i).second;
            }
        }
        return wall.size()-max;
    }
};
