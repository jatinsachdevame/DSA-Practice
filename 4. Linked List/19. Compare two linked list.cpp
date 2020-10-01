/*
 * Author : Rohit Shakya
 * Date   : June-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  compare two linked list
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1->data!=head2->data) 
        {
            return 0;
        }
        head1=head1->next;
        head2=head2->next;
    }
    
    return (head1==NULL&&head2==NULL);

}

