
// 作者：mxbbylin
// 创建时间：2020-10-21 11:23
// 最后修改时间：2020-10-21 11:23
// 文件名：622.cpp
// 说明： 
// 题目：
// 设计你的循环队列实现。 循环队列是一种线性数据结构，其操作表现基于 FIFO（先进先出）原则并且队尾被连接在队首之后以形成一个循环。它也被称为“环形缓冲器”。

class MyCircularQueue {
public:
    int* data;
    int head;
    int tail;
    int size;
    int cur;
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        data=new int[k];
        head=0;
        tail=0;
        size=k;
        cur=0;
    }

    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if(cur<size){
            data[tail++]=value;
            cur++;
            if(tail==size){
                tail=0;
            }
            return true;
        }
        return false;
    }

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if(cur>0){
            head++;
            cur--;
            if(head==size){
                head=0;
            }
            return true;
        }
        return false;
    }

    /** Get the front item from the queue. */
    int Front() {
        if(cur==0){
            return -1;
        }
        return data[head];
    }

    /** Get the last item from the queue. */
    int Rear() {
        if(cur==0){
            return -1;
        }
        return tail==0 ? data[size-1]:data[tail-1];
    }

    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return cur==0;
    }

    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return cur==size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
