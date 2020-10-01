/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : print tree upside down
 */
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
	Node(int x)
	{
		this->data=x;
		this->left=NULL;
		this->right=NULL;
	}
};
void printTree(Node *root)
{
	if(root==NULL) return;
	cout<<root->data<<" ";
	printTree(root->left);
	printTree(root->right);
}
int treeHeight(Node *root)
{
	if(root==NULL) return -1;
	else
	{
		int l=treeHeight(root->left);
		int r=treeHeight(root->right);
		return l>r?l+1:r+1;
	}
}
void givenLevel(Node *root, int level)
{
	if(root==NULL) return;
	if(level==0)cout<<root->data<<" ";
	else if(level>0)
	{
		givenLevel(root->left,level-1);
		givenLevel(root->right,level-1);
	} 
}
void printLevelOrder(Node *root)
{
	int h=treeHeight(root);
	for(int i=h;i>=0;i--)
	{
		givenLevel(root,i);
		cout<<endl;
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
	root->left->left->left=new Node(29);
	root->left->left->right=new Node(36);
	printTree(root);
	cout<<"tree height: "<<treeHeight(root)<<endl;
	printLevelOrder(root);
}
