/*
 * Author : Rohit Shakya
 * Date   : April-2020
 * Compiler : g++ 4.9.2
 * flags    : -std=c++14
 * title :  Linked list operations
 */
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

struct LinkedList
{
    Node *head, *tail;
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        Node *tmp = new Node;
        tmp->data = n;
        tmp->next = NULL;
        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
};

int main()
{
    LinkedList a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);
    a.add_node(4);
    a.add_node(7);
    a.add_node(8);
    Node *tmp;
    tmp=a.head;
    while(tmp!=NULL) //traverse from head to tail
    {
    	cout<<tmp->data<<" ";
    	tmp=tmp->next;
	}
    return 0;
}
