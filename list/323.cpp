
// 作者：mxbbylin
// 创建时间：2020-10-07 19:03
// 最后修改时间：2020-10-07 19:03
// 文件名：323.cpp
// 说明：这是leetcode第323题。
// 题目：
// 奇偶链表

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * }
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        if(head->next==nullptr){
            return head;
        }
        ListNode* oddlist=head;
        ListNode* evenlist=head->next;
        ListNode* temp=head->next->next;
        ListNode* oddtemp=oddlist;
        ListNode* eventemp=evenlist;
        int number=3;
        while(temp!=nullptr){
            if(number%2==1){
                oddtemp->next=temp;
                oddtemp=temp;
            }
            else{
                eventemp->next=temp;
                eventemp=temp;
            }
            temp=temp->next;
            number ++;
        }
        oddtemp->next=evenlist;
        eventemp->next=nullptr;
        return oddlist;
    }
};

//优化后
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * }
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        } 
        if(head->next==nullptr){
            return head;
        }
        ListNode* oddlist=head;
        ListNode* evenlist=head->next;
        ListNode* eventhead=head->next;
        while(evenlist->next!=nullptr ){
            oddlist->next=evenlist->next;
            oddlist=evenlist->next;
            if(oddlist->next==nullptr){
                break;
            }
            evenlist->next=oddlist->next;
            evenlist=oddlist->next;
        }
        oddlist->next=eventhead;
        evenlist->next=nullptr;
        return head;
    }
};
