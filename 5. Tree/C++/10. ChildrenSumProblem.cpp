/*
 * Author : Rohit Shakya
 * Date   : July-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title : Children sum problem 
 */
#include<iostream>
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
int isSumProperty(Node* root) 
{ 
	int leftData=0,rightData=0;
	if(root==NULL||root->left==NULL||root->right==NULL)
	return 1;
	if(root->left!=NULL) leftData=root->left->data;
	if(root->right!=NULL) rightData=root->right->data;
	if(root->data==(leftData+rightData)&&(isSumProperty(root->left)&&(isSumProperty(root->right))))
	return 1;
	else return 0;
} 

int main()
{
	Node *root=new Node(15);
	root->left=new Node(7);
	root->right=new Node(11);
	root->left->left=new Node(13);
	root->left->right=new Node(15);
	root->right->left=new Node(21);
	root->right->right=new Node(22);
	root->right->left->left=new Node(29);
	root->right->right->right=new Node(31);
	if(isSumProperty(root)) 
		cout << "The given tree satisfies "
			<< "the children sum property "; 
	else
		cout << "The given tree does not satisfy "
			<< "the children sum property "; 
	
}

