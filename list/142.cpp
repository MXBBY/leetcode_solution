
// 作者：mxbbylin
// 创建时间：2020-10-07 11:32
// 最后修改时间：2020-10-07 11:32
// 文件名：no_142.cpp
// 说明：这是leetcode第142题。
// 题目：
// 给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。

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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;
            if(slow==fast){
                ListNode* temp=head;
                while(temp!=slow){
                    temp=temp->next;
                    slow=slow->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};
 
