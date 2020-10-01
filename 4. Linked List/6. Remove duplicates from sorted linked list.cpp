/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title : remove duplicates from sorted linked list 
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ptr=head;
        while(head!=NULL&&head->next!=NULL)
        {
            if(head->val<head->next->val)
            {
                head=head->next;
            }
            else
            {
                head->next=head->next->next;
            }
            
        }   
        return ptr;
    }
};
