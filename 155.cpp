
// 作者：mxbbylin
// 创建时间：2020-10-21 11:31
// 最后修改时间：2020-10-21 11:31
// 文件名：155.cpp
// 说明：
// 题目:
// 设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。

class MinStack {
public:
    stack<int> x_stack;
    stack<int> min_stack;

    /** initialize your data structure here. */
    MinStack() {
        min_stack.push(INT_MAX);
    }

    void push(int x) {
        x_stack.push(x);
        int cur_min=min_stack.top();
        if(cur_min<x) min_stack.push(cur_min);
        else min_stack.push(x);
    }

    void pop() {
        x_stack.pop();
        min_stack.pop();
    }

    int top() {
        return x_stack.top();
    }

    int getMin() {
        return min_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
 
