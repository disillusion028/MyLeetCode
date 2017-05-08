class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //when using binary search,xlogx+(x-1)log(x-1)+...+1log1
        //when using map,O(n)
        unordered_map<int,int> mymap;
        for(size_t i=0;i<numbers.size();i++){
            mymap[numbers[i]]=i+1;
        }
        for(size_t i=0;i<numbers.size();i++){
            if(mymap[target-numbers[i]]){
                return {i+1,mymap[target-numbers[i]]};
            }
        }
        return {-1,-1};
    }
};//using same way as Problem 1,but there should be a better way
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //when using binary search,xlogx+(x-1)log(x-1)+...+1log1
        //when using map,O(n)
        //then it is nice to use one travel
        /*
        unordered_map<int,int> mymap;
        for(size_t i=0;i<numbers.size();i++){
            mymap[numbers[i]]=i+1;
        }
        for(size_t i=0;i<numbers.size();i++){
            if(mymap[target-numbers[i]]){
                return {i+1,mymap[target-numbers[i]]};
            }
        }
        return {-1,-1};
        */
        int x=0,y=numbers.size()-1;
        while(true){
            if(numbers[x]+numbers[y]==target)return {x+1,y+1};
            if(numbers[x]+numbers[y]>target){y--;}
            else if(numbers[x]+numbers[y]<target){x++;}
        }
    }
};
