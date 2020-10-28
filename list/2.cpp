
// 作者：mxbbylin
// 创建时间：2020-10-08 16:41
// 最后修改时间：2020-10-08 16:41
// 文件名：2.cpp
// 说明： 这是leetcode的第二题。
// 题目：
// 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int temp=0;
        ListNode* addlist=new ListNode(0);
        ListNode* p=addlist;
        while(l1!=nullptr || l2!=nullptr || temp!=0){
            int l1val=l1!=nullptr ? l1->val:0;
            int l2val=l2!=nullptr ? l2->val:0;
            int sumval=l1val+l2val+temp;
            temp=sumval/10;
            p->next=new ListNode(sumval%10);
            p=p->next;
            if(l1!=nullptr){
                l1=l1->next;
            }
            if(l2!=nullptr){
                l2=l2->next;
            }
        }
        return addlist->next;
    }
};
 
