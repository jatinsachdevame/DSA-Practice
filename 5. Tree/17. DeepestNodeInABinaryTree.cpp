/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : Iterative method to find deepest node of Binary Tree  
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
Node* deep(Node *root)
{
    queue<Node*> q;
    Node *temp;
    if(root==NULL) return NULL;
    q.push(root);
    while(!q.empty())
    {
       temp=q.front();
       q.pop();   
       if(temp->left)
         q.push(temp->left);
        if(temp->right)
          q.push(temp->right);
   }
   // last executed temp is at deepest level
   return temp;
    
 }

int main()
{
    Node *root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    Node *res=deep(root);
    cout<<"Deepest node of a Tree is: "<<res<<endl;
    cout<<"Data of that deepest node is: "<<res->data;
    return 0;
}



