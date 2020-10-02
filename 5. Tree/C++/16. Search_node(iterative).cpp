/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : searching element without using recursion
 */

#include<iostream>
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

bool find(Node * root , int d)
{
    queue<Node*> q;
    Node *temp;
   	q.push(root);
   	while(!q.empty())
   	{
       temp=q.front();
       q.pop();
        if (temp->data==d)
         return 1;
        else
          {
              if(temp->left)
                 q.push(temp->left);
              if(temp->right)
                  q.push(temp->right);
          }   
   }
    return 0;
 }

int main()
{
    Node *root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    
    bool ans=find(root,2);
    if(ans==1)
    cout<<"\nFOUND !!";
    else
    cout<<"\n NOT FOUND !!";    
    return 0;
}


