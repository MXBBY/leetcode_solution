
// 作者：mxbbylin
// 创建时间：2020-10-07 11:30
// 最后修改时间：2020-10-07 11:30
// 文件名：no_160.cpp
// 说明：这是leetcode第160题。
// 题目：
// 编写一个程序，找到两个单链表相交的起始节点。

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA;
        ListNode* b=headB;
        int length_a=0;
        int length_b=0;
        if(a==nullptr || b==nullptr){
            return nullptr;
        }
        while(a->next!=nullptr){
            a=a->next;
            length_a++;
        }
        while(b->next!=nullptr){
            b=b->next;
            length_b++;
        }
        a=headA;
        b=headB;
        if(length_a>length_b){
            length_a=length_a-length_b;
            while(length_a>0){
                a=a->next;
                length_a--;
            }
        }
        else{
            length_b=length_b-length_a;
            while(length_b>0){
                b=b->next;
                length_b--;
            }
        }

        while(a!=nullptr && b!=nullptr){
            if(a==b){
                return a;
            }
            a=a->next;
            b=b->next;
        }
        return nullptr;
    }
};
 
