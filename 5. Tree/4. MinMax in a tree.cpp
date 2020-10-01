/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Operations on a binary tree
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
vector<int> traverse(Node *root)
{
	
	int static max=INT_MIN;
	int static min=INT_MAX;
	if(root!=NULL)
	{
		traverse(root->left);
		cout<<root->data<<" ";
		if(root->data>max) max=root->data;
		if (root->data<min)min=root->data;
		traverse(root->right);	
	}
	return {max,min};
}
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
void givenLevel(Node *root, int level)
{
	if(root==NULL) return;
	if(level==1) cout<<root->data<<" ";
	else if(level>1)
	{
		givenLevel(root->left,level-1);
		givenLevel(root->right,level-1);
	}
}
void levelOrder(Node *root)
{
	int h=height(root);
	for(int i=0;i<=h;i++)
	{
		givenLevel(root,i);
		cout<<endl;
	}
}
int main()
{
	Node* root=new Node(5);
	root->left=new Node(7);
	root->right=new Node(11);
	root->left->left=new Node(13);
	root->left->right=new Node(15);
	root->right->left=new Node(21);
	root->right->right=new Node(22);
	root->right->left->left=new Node(29);
	root->right->right->right=new Node(31);
	cout<<"Inorder traversal of the tree\n";
	vector<int> v=traverse(root);
	cout<<endl<<"Max of the tree: "<<v[0]<<endl<<"Min of the tree: "<<v[1];
	cout<<endl<<"height of the binary tree: "<<height(root);
	cout<<endl;
	cout<<"Level order traversal of the tree\n";
	levelOrder(root);

}
