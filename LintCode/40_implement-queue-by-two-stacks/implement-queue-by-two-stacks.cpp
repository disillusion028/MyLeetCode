/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/implement-queue-by-two-stacks
@Language: C++
@Datetime: 17-02-14 10:24
*/

class Queue {
public:
    stack<int> stack1;
    stack<int> stack2;
    int ret;
    Queue() {
        // do intialization if necessary
        
    }

    void push(int element) {
        // write your code here
        stack1.push(element);
    }
    
    int pop() {
        // write your code here
        if(stack1.empty()&&stack2.empty())return -1;
        while(!stack1.empty()){
            stack2.push(stack1.top());
            stack1.pop();
        }
        int ret=stack2.top();
        stack2.pop();
        while(!stack2.empty()){
            stack1.push(stack2.top());
            stack2.pop();
        }
        return ret;
    }

    int top() {
        // write your code here
        if(stack1.empty()&&stack2.empty())return -1;
        while(!stack1.empty()){
            stack2.push(stack1.top());
            stack1.pop();
        }
        int ret=stack2.top();
        while(!stack2.empty()){
            stack1.push(stack2.top());
            stack2.pop();
        }
        return ret;
    }
};
