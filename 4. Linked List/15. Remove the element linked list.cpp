/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title : remove the element from linked list 
 */

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
        if(head==NULL) return NULL;
        ListNode *ptr=head;
        ListNode *ptr1=head;
        head=head->next;
        while(head!=NULL)
        {
            if(head->val==val) ptr->next=head->next;
            else ptr=ptr->next;
            head=head->next;
        }
        if(ptr1->val==val) return ptr1->next;
        else return ptr1;
        
    }
};
