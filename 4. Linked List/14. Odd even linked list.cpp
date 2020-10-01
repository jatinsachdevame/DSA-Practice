/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title : odd even linked list 
 */
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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode *b=head->next;
        ListNode *a1=head;
        ListNode *b1=head->next;
        while(a1->next!=NULL&&b1->next!=NULL)
        {
            a1->next=b1->next;
            a1=a1->next;
            b1->next=a1->next;
            b1=b1->next;
        }
        a1->next=b;
        return head;
    }
};
