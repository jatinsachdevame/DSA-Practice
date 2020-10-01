/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : left view of a tree
 */
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int x)
	{
		data=x;
		left=NULL;
		right=NULL;
	}
};

void leftView(Node* root, int level)
{
	if(root==NULL) return;
	if(level==0) 
	{
		cout<<root->data<<" ";
	}
	else if(level>0) 
	{
		if(root->left)
		{
			leftView(root->left, level-1);	
		}
		else
		{
			leftView(root->right, level-1);	
		}		
	}
}

void rightView(Node* root, int level)
{
	if(root==NULL) return;
	if(level==0) 
	{
		cout<<root->data<<" ";
	}
	else if(level>0) 
	{
		if(root->right)
		{
			rightView(root->right, level-1);	
		}
		else
		{
			rightView(root->left, level-1);	
		}		
	}
}
void fullView(Node* root, int level)
{
	if(root==NULL) return;
	if(level==0) 
	{
		cout<<root->data<<" ";
	}
	else if(level>0) 
	{
		
		fullView(root->left, level-1);	
		fullView(root->right, level-1);		
	}
}
int height(Node* root)
{
	if(root==NULL) return -1;
	int ldepth=height(root->left);
	int rdepth=height(root->right);
	if(ldepth>rdepth) return ldepth+1;
	else return rdepth+1;

}
void levelOrder(Node *root)
{
	int h=height(root);
	cout<<"Height of binary tree: "<<h<<endl;
	cout<<"Full View of binary tree\n";
	for(int i=0;i<=h;i++)
	{
		fullView(root,i);
		cout<<endl;
	}
	cout<<"Left View of binary tree\n";
	for(int i=0;i<=h;i++)
	{
		leftView(root,i);
		cout<<endl;
	}
	cout<<"Right View of binary tree\n";
	for(int i=0;i<=h;i++)
	{
		rightView(root,i);
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
	root->left->right->left=new Node(29);
	root->left->right->right=new Node(16);
	root->right->left->left=new Node(19);
	root->right->left->right=new Node(32);
	root->right->right->left=new Node(9);
	root->right->right->right=new Node(3);
	levelOrder(root);
}
