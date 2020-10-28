
// 作者：mxbbylin
// 创建时间：2020-10-07 11:28
// 最后修改时间：2020-10-07 11:28
// 文件名：no_19.cpp
// 说明：这是leetcode第19题。
// 题目：
// 给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if(fast==nullptr){
            return head->next;
        }
        while(fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};
 
