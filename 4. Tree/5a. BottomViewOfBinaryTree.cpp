/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title :
 */
// C++ Program to print Bottom View of Binary Tree 
#include<bits/stdc++.h> 
using namespace std; 
struct Node 
{ 
	int data; //data of the node 
	int hd; //horizontal distance of the node 
	Node *left, *right; //left and right references 
	Node(int key) 
	{ 
		data = key; 
		hd = INT_MAX; 
		left = right = NULL; 
	} 
}; 

// Method that prints the bottom view. 
void bottomView(Node *root) 
{
	if(root==NULL)
	return ;
	int hd=0;
	root->hd=hd;
	queue<Node*> q;
	q.push(root);
	map<int,int> m;
	while(!q.empty())
	{
		Node *temp=q.front();
		q.pop();
		hd=temp->hd;
		m[hd]=temp->data;
		if(temp->left!=NULL)
		{
			temp->left->hd=temp->hd-1;
			q.push(temp->left);
		}
		if(temp->right!=NULL)
		{
			temp->right->hd=temp->hd+1;
			q.push(temp->right);
		}
	}
	for(auto i=m.begin();i!=m.end();i++)
	{
		cout<<i->second<<" ";
	 } 
 
}
int main() 
{ 
	Node *root = new Node(20); 
	root->left = new Node(8); 
	root->right = new Node(22); 
	root->left->left = new Node(5); 
	root->left->right = new Node(3); 
	root->right->left = new Node(4); 
	root->right->right = new Node(25); 
	root->left->right->left = new Node(10); 
	root->left->right->right = new Node(14); 
	cout << "Bottom view of the given binary tree :\n";
	bottomView(root); 
	return 0; 
} 

