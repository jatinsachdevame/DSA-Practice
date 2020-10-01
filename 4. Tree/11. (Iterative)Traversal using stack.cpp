/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Iterative traversal of a tree/ stack method
 */

#include<bits/stdc++.h>
using namespace std;
struct Node 
{ 
	int data; 
	struct Node* left; 
	struct Node* right; 
	Node (int data) 
	{ 
		this->data = data; 
		left = right = NULL; 
	} 
}; 
void inOrder(Node *root)
{
	stack<Node*> s;
	Node *curr=root;
	while(curr!=NULL||(!s.empty()))
	{
		while(curr!=NULL)
		{
			s.push(curr);
			curr=curr->left;
		}
		curr=s.top();
		cout<<s.top()->data<<" ";
		s.pop();
		curr=curr->right;
	}
}
int main() 
{ 

	/* Constructed binary tree is 
			1 
			/ \ 
		2	 3 
		/ \ 
	4	 5 
	*/
	struct Node *root = new Node(1); 
	root->left	 = new Node(2); 
	root->right	 = new Node(3); 
	root->left->left = new Node(4); 
	root->left->right = new Node(5); 
	inOrder(root); 
	return 0; 
} 

