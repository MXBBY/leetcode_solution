
// 作者：mxbbylin
// 创建时间：2020-10-28 15:30
// 最后修改时间：2020-10-28 15:30
// 文件名：232.cpp
// 说明：
// 题目：
// 请你仅使用两个栈实现先入先出队列。队列应当支持一般队列的支持的所有操作（push、pop、peek、empty）：

class MyQueue {
public:
    stack<int> stk1;
    stack<int> stk2;
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        stk1.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(!stk1.empty()){
            int temp=stk1.top();
            stk1.pop();
            stk2.push(temp);
        }
        int out=stk2.top();
        stk2.pop();
        while(!stk2.empty()){
            int temp=stk2.top();
            stk2.pop();
            stk1.push(temp);
        }
        return out;
    }

    /** Get the front element. */
    int peek() {
        if(stk1.empty()) return -1;
        while(!stk1.empty()){
            int temp=stk1.top();
            stk1.pop();
            stk2.push(temp);
        }
        int out=stk2.top();
        while(!stk2.empty()){
            int temp=stk2.top();
            stk2.pop();
            stk1.push(temp);
        }
        return out;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return stk1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
 
