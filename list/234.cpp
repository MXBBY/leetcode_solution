
// 作者：mxbbylin
// 创建时间：2020-10-08 13:27
// 最后修改时间：2020-10-08 13:27
// 文件名：234.cpp
// 说明： 这是leetcode第234题。
// 题目：
// 请判断一个链表是否为回文链表。

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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head, *fast=head, *prev=nullptr;
        while(fast){
            slow=slow->next;
            fast=fast->next ? fast->next->next: fast->next;
        }
        while(slow){
            ListNode* temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
        }
        while(head && prev){
            if(head->val != prev->val){
                return false;
            }
            head=head->next;
            prev=prev->next;
        }
        return true;
    }
};
 
