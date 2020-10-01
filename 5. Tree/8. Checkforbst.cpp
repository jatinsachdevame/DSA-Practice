/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : check whether a tree is bst or not
 */
#include<bits/stdc++.h>
using namespace std;
class node 
{ 
	public: 
	int data; 
	node* left; 
	node* right; 
	node(int data) 
	{ 
		this->data = data; 
		this->left = NULL; 
		this->right = NULL; 
	} 
}; 
bool isBst(node *root,int min, int max)
{
	if(root==NULL) return true;
	if(root->data<min||root->data>max) return false;
	else return ((root->left,min,root->data-1)&&(root->right,root->data+1,max));
}
int main() 
{ 
	node *root = new node(4); 
	root->left = new node(2); 
	root->right = new node(5); 
	root->left->left = new node(1); 
	root->left->right = new node(3); 
	
	if(isBst(root,INT_MIN,INT_MAX)) 
		cout<<"Is BST"; 
	else
		cout<<"Not a BST"; 		
	return 0; 
}
