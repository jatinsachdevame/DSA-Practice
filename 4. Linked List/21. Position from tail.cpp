/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  position from tail
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {

    int count=0;
    SinglyLinkedListNode* p=head;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    positionFromTail=count-positionFromTail;
    int m=1;
    while(m!=positionFromTail)
    {
        p=p->next;
        m++;
    }
    return p->data;
}
