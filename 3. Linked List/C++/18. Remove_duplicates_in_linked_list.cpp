/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  remove duplicates from the sorted linked list
 */


SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {

    SinglyLinkedListNode* p=head;
    while(head!=NULL&&head->next!=NULL)
    {
         if(head->data<head->next->data)
            {
                head=head->next;
            }
            else
            {
                head->next=head->next->next;
            }
    }
    return p;
}

