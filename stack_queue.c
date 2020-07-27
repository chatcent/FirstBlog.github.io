class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack1.empty() && stack2.empty())
            return -1;

        if(stack2.empty()){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        int temp = stack2.top();
        stack2.pop();
        return temp;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};



//队列实现栈
class MyStack {
public: /** Initialize your data structure here. */

    MyStack() {   
    }
    /** Push element x onto stack. */
    void push(int x) {
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
    }
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int a=q2.front();
        q2.pop();
        return a;
    }
    /** Get the top element. */
    int top() {
        return q2.front();
    }  
    /** Returns whether the stack is empty. */
    bool empty() {
        return q2.empty();
    }

private:
        queue<int> q1, q2;
};

