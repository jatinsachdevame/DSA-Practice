#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node *prev;
};
struct doublyLinkedList{
	node *head,*tail;
	int count=0;
	doublyLinkedList()
	{
		head=NULL;
		tail=NULL;
	}
	addNode(int x)
	{
		count++;
		node *tmp=new node();
		tmp->data=x;
		tmp->next=NULL;
		tmp->prev=NULL;
		if(head==NULL)
		{
			head=tmp;
			tail=tmp;
		}
		else
		{
			tail->next=tmp;
			tmp->prev=tail;
			tail=tail->next;
		}
	}
	reverse()
	{
		while(head!=tail)
		{
			node *n1=new node();
			n1->data=head->data;
			head->data=tail->data;
			tail->data=n1->data;
			head=head->next;
			tail=tail->prev;
			
		}
	}
};
int main()
{
	node *ptrh;
	node *ptrt;
	doublyLinkedList a;
	a.addNode(5);
	a.addNode(6);
	a.addNode(7);
	a.addNode(8);
	ptrh=a.head;
	ptrt=a.tail;
	while(ptrh!=NULL) //traverse from head to tail in doubly linked list
	{
		cout<<ptrh->data<<" ";
		ptrh->data+=2; //increment of 2 in each node
		ptrh=ptrh->next;
	}
	cout<<endl;
	while(ptrt!=NULL)  //traverse from tail to head in doubly linked list
	{
		cout<<ptrt->data<<" ";
		ptrt=ptrt->prev;
	}
	cout<<a.count; //count the number of nodes
	
}
