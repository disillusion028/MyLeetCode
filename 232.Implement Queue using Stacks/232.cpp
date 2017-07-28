class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        stack<int>().swap(s1);
        stack<int>().swap(s2);
    }
    stack<int>s1;
    stack<int>s2;
    /** Push element x to the back of queue. */
    void push(int x) {
        if(s1.empty()){
            s2.push(x);
        }
        else{
            s1.push(x);
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(this->empty())return -1;
        int temp;
        if(s1.empty()){
            while(!s2.empty()){
                temp=s2.top();
                s1.push(temp);
                s2.pop();
            }
            s1.pop();
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        else if(s2.empty()){
            while(!s1.empty()){
                temp=s1.top();
                s2.push(temp);
                s1.pop();
            }
            s2.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        return temp;

    }
    
    /** Get the front element. */
    int peek() {
        if(this->empty())return -1;
        int temp;
        if(s1.empty()){
            while(!s2.empty()){
                temp=s2.top();
                s1.push(temp);
                s2.pop();
            }
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        else if(s2.empty()){
            while(!s1.empty()){
                temp=s1.top();
                s2.push(temp);
                s1.pop();
            }
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        return temp;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(s1.empty()&&s2.empty())return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
