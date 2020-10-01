/* C++ Program to find LCA of n1 and n2 using one traversal of Binary Tree */
#include <bits/stdc++.h> 
using namespace std;  
struct Node 
{ 
	struct Node *left, *right; 
	int data; 
}; 

Node* newNode(int data) 
{ 
	Node *temp = new Node; 
	temp->data = data; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

struct Node *findLCA(struct Node* root, int n1, int n2) 
{ 
	if(root==NULL) return NULL;
	if(root->data==n1||root->data==n2) return root;
	Node *lcal=findLCA(root->left,n1,n2);
	Node *lcar=findLCA(root->right,n1,n2);
	if(lcal&&lcar) return root;
	return lcal? lcal:lcar;
} 

int main() 
{ 
	Node * root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	root->right->left = newNode(6); 
	root->right->right = newNode(7); 
	cout << "LCA(4, 5) = " << findLCA(root, 4, 5)->data; 
	cout << "\nLCA(4, 6) = " << findLCA(root, 4, 6)->data; 
	cout << "\nLCA(3, 4) = " << findLCA(root, 3, 4)->data; 
	cout << "\nLCA(2, 4) = " << findLCA(root, 2, 4)->data; 
	return 0; 
}

