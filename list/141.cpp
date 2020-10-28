
// 作者：mxbbylin
// 创建时间：2020-10-07 11:34
// 最后修改时间：2020-10-07 11:34
// 文件名：no_141.cpp
// 说明：这是第141题。
// 题目：
// 给定一个链表，判断链表中是否有环。

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
    bool hasCycle(ListNode *head) {
        if(head==nullptr){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
 
