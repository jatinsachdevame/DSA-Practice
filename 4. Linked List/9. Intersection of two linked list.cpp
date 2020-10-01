/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * time complexity : O(n)
 * title :  intersection of two linked list
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr1,*ptr2;
        ptr1=headA;
        ptr2=headB;
        int count1=0,count2=0;
        while(ptr1!=NULL)
        {
            count1++;
            ptr1=ptr1->next;
        }
        while(ptr2!=NULL)
        {
            count2++;
            ptr2=ptr2->next;
        }
        int d=abs(count1-count2);
        if(count1>count2)
        {
            for(int i=0;i<d;i++)
            {
                headA=headA->next;
            }
        }
        else
        {
            for(int i=0;i<d;i++)
            {
                headB=headB->next;
            }
        }
        while(headA!=NULL&&headB!=NULL)
        {
            if(headA==headB)
            {
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};
