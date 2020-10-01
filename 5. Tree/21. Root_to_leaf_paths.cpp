/*
 * Author : Rohit Shakya
 * Date   : Aug-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity :
 * Title : To print root-to-leaf paths
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
void print(int path[] , int pathlen)
{
    for(int i=0;i<pathlen;i++)
      cout<<path[i]<<" ";
}

void find_paths(Node *root , int path[], int pathlen)
{
    if(root==NULL)
    return;
    
    path[pathlen]=root->data;
    pathlen++;
    
    //check leaf
    if(root->left==NULL && root->right==NULL)
    {      
    print(path , pathlen);
       cout<<"\n";
    }  
    else
    {
        find_paths(root->left,path,pathlen);
        find_paths(root->right,path,pathlen);   
    }
}

int main()
{
    int path[100];
    int pathlen=0;
    Node *root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    cout<<"\n Paths from root to leaf are   \n";
    find_paths(root,path , pathlen);
    return 0;
}




