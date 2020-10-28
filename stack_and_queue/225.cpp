
// 作者：mxbbylin
// 创建时间：2020-10-28 15:31
// 最后修改时间：2020-10-28 15:31
// 文件名：225.cpp
// 说明： 
// 题目：
// 使用队列实现栈

class MyStack {
public:
    queue<int> que;
    queue<int> que1;
    int size;
    /** Initialize your data structure here. */
    MyStack() {
    }

    /** Push element x onto stack. */
    void push(int x) {
        que1.push(x);
        while(!que.empty()){
            que1.push(que.front());
            que.pop();
        }
        swap(que,que1);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int out=que.front();
        que.pop();
        return out;
    }

    int top(){
        return que.front();
    }
    /** Returns whether the stack is empty. */
    bool empty() {
        return que.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
 
