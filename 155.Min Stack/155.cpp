class MinStack {
public:
    /** initialize your data structure here. */
    multiset<int> mymset;
    vector<int> myvec; 
    MinStack() {
        multiset<int>().swap(mymset);
        vector<int>().swap(myvec);
    }
    
    void push(int x) {
        mymset.insert(x);
        myvec.push_back(x);
    }
    
    void pop() {
        mymset.erase(mymset.find(myvec.back()));
        myvec.pop_back();
    }
    
    int top() {
        return myvec.back();
    }
    
    int getMin() {
        return *(mymset.begin());
    }
};//33ms, well it is also a feasible way...

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
