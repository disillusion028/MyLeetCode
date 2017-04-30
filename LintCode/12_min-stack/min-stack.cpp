/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/min-stack
@Language: C++
@Datetime: 17-02-14 09:33
*/

class MinStack {
public:
        int stk[1000]={0};
        int top = -1;
        int minnum[1000]={0};
        int miniter=-1;
    MinStack() {
        // do initialization if necessary
        top = -1;
        miniter=-1;
    }

    void push(int number) {
        // write your code here
        if(top==-1){//empty
            minnum[++miniter]=number;
            //m[0]=number   miniter=0
        }
        else if(number<minnum[miniter]){
            minnum[++miniter]=number;
        }
        else if(number>=minnum[miniter]){
            //that should not be ignored
        //miniter must be the same as top
            minnum[++miniter]=minnum[miniter-1];
        }
        stk[++top]=number;
    }

    int pop() {
        // write your code here
        int ret=stk[top--];
        miniter--;
        return ret;
    }

    int min() {
        // write your code here
        return minnum[miniter];
    }
};
