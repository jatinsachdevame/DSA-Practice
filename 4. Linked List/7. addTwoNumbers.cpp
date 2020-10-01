/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(N)
 * Title : add two numbers in a linked list
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode(0);
        ListNode *d=head;
        int sum=0;
        while(l1!=NULL||l2!=NULL)
        {
            sum/=10;
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            d->next=new ListNode(sum%10);
            d=d->next;
        }
        if(sum/10) d->next=new ListNode(1);
        return head->next;
        
    }
};
