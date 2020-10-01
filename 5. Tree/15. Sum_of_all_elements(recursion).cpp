/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : Sum of all nodes of the tree with recursion
 */

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int data)
    {
    	this->data=data;
    	this->left=NULL;
    	this->right=NULL;
	}
};
int sum(Node *root)
{
	if(root==NULL) return 0;
	return sum(root->left)+sum(root->right)+root->data;
}

int main()
{
    Node *root=new Node(5);
	root->left=new Node(7);
	root->right=new Node(11);
	root->left->left=new Node(13);
	root->left->right=new Node(15);
	root->right->left=new Node(21);
	root->right->right=new Node(22);
	root->left->left->left=new Node(29);
	root->left->left->right=new Node(36);
	root->left->right->left=new Node(29);
	root->left->right->right=new Node(16);
	root->right->left->left=new Node(19);
	root->right->left->right=new Node(32);
	root->right->right->left=new Node(9);
	root->right->right->right=new Node(3);
   	cout<<"Sum of all nodes of the Tree is: "<<sum(root);
    return 0;
}



