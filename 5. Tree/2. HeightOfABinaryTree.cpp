/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Height of a binary tree
 */
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int x)
	{
		data=x;
		left=NULL;
		right=NULL;
	}
};
int height(Node *root)
{
	if(root==NULL) return -1;
	else
	{
		int ldepth,rdepth;
		ldepth=height(root->left);
		rdepth=height(root->right);
		if(ldepth>rdepth) return ldepth+1;
		return rdepth+1;
	}
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
	root->right->left->left=new Node(29);
	root->right->right->right=new Node(31);
	cout<<"Height of a binary tree: "<<height(root)<<endl;
}

