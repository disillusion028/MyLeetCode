class MyQueue {
public:
  void Move()  {
    while(!s1.empty()) {
      s2.push(s1.top());
      s1.pop();
    }
  }

    /** Initialize your data structure here. */
  MyQueue() = default;

    /** Push element x to the back of queue. */
  void push(int x) {
    s1.push(x);
  }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
      if (s2.empty()) Move();
      int ret = s2.top();
      s2.pop();
      return ret;
    }

    /** Get the front element. */
    int peek() {
      if (s2.empty()) Move();
      return s2.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
      return s1.empty() && s2.empty();
    }
private:
  stack<int> s1;
  stack<int> s2;
};
