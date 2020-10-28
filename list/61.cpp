
// 作者：mxbbylin
// 创建时间：2020-10-21 11:21
// 最后修改时间：2020-10-21 11:21
// 文件名：61.cpp
// 说明： 
// 题目：
// 给定一个链表，旋转链表，将链表每个节点向右移动 k 个位置，其中 k 是非负数。

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0){
            return head;
        }
        ListNode* fast=head;
        int size=1;
        while(fast->next!=nullptr){
            fast=fast->next;
            size++;
        }
        k=k%size;
        if(k==0){
            return head;
        }
        fast->next=head;

        for(int i=0;i<size-k;i++){
            fast=fast->next;
        }
        ListNode* newHead=fast->next;
        fast->next=nullptr;
        return newHead;
    }
};
