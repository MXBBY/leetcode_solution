
// 作者：mxbbylin
// 创建时间：2020-10-07 15:09
// 最后修改时间：2020-10-07 15:09
// 文件名：203.cpp
// 说明： 这是leetcode第203题的答案。
// 题目：
// 移除链表元素。

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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode* cur=head;
        ListNode* pre=nullptr;
        while(cur!=nullptr){
                if(cur->val==val){
                    if(cur==head){
                        head=head->next;
                        cur=head;
                    }
                    else{
                        pre->next=cur->next;
                        cur=cur->next;
                    }
                }
                else{
                        pre=cur;
                        cur=cur->next;
                    }
            }
            return head;
        }
};
 
