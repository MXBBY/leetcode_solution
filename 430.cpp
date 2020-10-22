
// 作者：mxbbylin
// 创建时间：2020-10-08 20:32
// 最后修改时间：2020-10-08 20:32
// 文件名：430.cpp
// 说明：这是leetcode第430题。
// 题目：
// 扁平化列表，使所有结点出现在单级双链表中。

 /*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* tail;
    Node* flatten(Node* head) {
        tail=head;
        dfs(head);
        return head;
    }
    void dfs(Node* head){
        if(head==nullptr){
            return;
        }
        Node* next=head->next;
        if(head->child!=nullptr){
            head->child->prev=head;
            head->next=head->child;
            tail=head->next;
            dfs(head->child);
            head->child=nullptr;
        }
        tail->next=next;
        if(next!=nullptr){
            next->prev=tail;
            tail=next;
        }
        dfs(next);
    }
}; 
 
