class RandomizedSet {
public:
    /** Initialize your data structure here. */
    unordered_set <int> mset;
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(mset.find(val)==mset.end())
        {   
            mset.insert(val);
            return true;
        }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(mset.find(val)!=mset.end())
        {   
            mset.erase(val);
            return true;
        }
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int sz=mset.size();
        if(sz!=0){
            auto it=mset.begin();
            int count = rand()%sz;
            while(count--){
                 it++;
            }
            return *it;
        }
        else return -1;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
// bad one without any opt 115ms
