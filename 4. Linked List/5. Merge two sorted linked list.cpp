/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n+m)
 * title :  merge two sorted linked list
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val <l2->val) 
        {
            l1->next=mergeTwoLists(l1->next,l2);
            return l1;   
        }
        else
        {
             l2->next=mergeTwoLists(l1, l2->next);
             return l2;
        }        
    }
};
