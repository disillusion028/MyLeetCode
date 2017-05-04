class RandomizedSet 
{
public:
    /** Initialize your data structure here. */
    RandomizedSet() {}
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) 
    {
        if(table.count(val)) return false;
        table[val] = array.size();
        array.push_back(val);
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) 
    {
        if(!table.count(val)) return false;
        // we need to keep O(1) time complexity
        int index = table[val];
        table.erase(val);
        if(index != array.size()-1)
        {
            swap(array[index], array[array.size()-1]);
            table[array[index]] = index;
        }
        array.pop_back();
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() 
    {
        int index = rand()%array.size();
        return array[index];
    }
    
private:
    vector<int> array;
    unordered_map<int, int> table;
};
/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
//pretty good solution and it is 45ms,mine is using set,this solution is very smart to use map to contain a key-value pair to save the num and its position in vector<int> array!

