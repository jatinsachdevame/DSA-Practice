/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : cycle in a linked list /floyd's cycle detection algorithm
 * Alternate Methods: hashing and structural change (O(N)time + O(n)space) and smallest power of 2
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
    bool hasCycle(ListNode *head) {
        ListNode *a,*b; //a is walker and b is runner
        a=head;
        b=head;
        if(head==NULL)
            return false;
        while(b->next!=NULL&& b->next->next!=NULL)
        {
            a=a->next;
            b=b->next->next;
            if(a==b)
            {
                return true;
            }
        }
            return false;
    }
};

/* From several posts, I have come to know how to detect cycles in a linked list,
 the length of a cycle. I also found the method on how to detect the start of the loop.
Here are the steps again for reference.
Detecting Loop:
Have two pointers, classically called hare and tortoise. Move hare by 2 steps and tortoise by 1. If they meet at some point, then there 
is surely a cycle and the meeting point is obviously inside the cycle.
Finding length of Loop?

Keep one pointer fixed at meeting point while increment the other until they are same again.
Increment a counter as you go along and the counter value at meet will be the length of cycle.

Find the start of cycle?

Take one pointer to start of the list and keep the other at the meeting point. Now increment both by one and the meet point 
is the start of loop. I verified the
method using some cases on paper, but I don't understand why it should work.
*/

