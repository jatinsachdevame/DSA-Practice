/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : Delete binary tree using post order
 */
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left , *right;
    Node(int d)
    {
        data=d;
        left=right=NULL;
    }
};
void delete_tree(Node *root)
{
    // base case
    if(root==NULL)
    return ;
    // using post ordr - delete child then root
    delete_tree(root->left);
    delete_tree(root->right);
    free(root);
    
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    delete_tree(root);
    cout<<"Tree is deleted !";
    return 0;
}





