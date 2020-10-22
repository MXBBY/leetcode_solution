
// 作者：mxbbylin
// 创建时间：2020-10-07 13:29
// 最后修改时间：2020-10-07 13:29
// 文件名：206.cpp
// 说明： 这是leetcode第206题
// 题目：
// 反转一个单链表。

//双指针
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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp1=head;
        ListNode* temp2=head;
        ListNode* newlist=nullptr;
        while(temp1!=nullptr){
            temp2=temp1->next;
            temp1->next=newlist;
            newlist=temp1;
            temp1=temp2;
        }
        return newlist;
    }
};
 

//递归
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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* next=reverseList(head->next);
        head->next->next=head;
        head->next=nullptr;
        return next;
    }
};
