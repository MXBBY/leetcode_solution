
// 作者：mxbbylin
// 创建时间：2020-10-08 15:38
// 最后修改时间：2020-10-08 15:38
// 文件名：21.cpp
// 说明：这是leetcode的第21题。
// 题目：
// 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp;
        ListNode* newlist;
        if(l1==nullptr){
            return l2;
        }
        if(l2==nullptr){
            return l1;
        }
        if(l1->val<=l2->val){
            newlist=l1;
            l1=l1->next;
            temp=newlist;
        }
        else{
            newlist=l2;
            l2=l2->next;
            temp=newlist;
        }
        while(l1!=nullptr && l2!=nullptr){
            if(l1->val<l2->val){
                    temp->next=l1;
                    temp=l1;
                    l1=l1->next;
            }
            else{
                    temp->next=l2;
                    temp=l2;
                    l2=l2->next;
            }
        }
        if(l1==nullptr){
            temp->next=l2;
        }
        else{
            temp->next=l1;
        }
        return newlist;
    }
};
 
