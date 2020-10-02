  
/*
 * Author : Udit Khanna
 * Date   : October-2020 
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */


// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
  
// Node of the binary tree 
struct node { 
    int data; 
    node* left; 
    node* right; 
    node(int data) 
    { 
        this->data = data; 
        left = NULL; 
        right = NULL; 
    } 
}; 
  
// Function to flatten Binary tree 
void flatten(node* parent) 
{ 
    // Queue to store node 
    // for BFS 
    stack<node *> c_lev, n_lev; 
  
    c_lev.push(parent->left); 
    c_lev.push(parent->right); 
  
    bool lev = 1; 
    node* prev = parent; 
  
    // Code for BFS 
    while (c_lev.size()) { 
  
        // Size of queue 
        while (c_lev.size()) { 
  
            // Front most node in 
            // queue 
            node* curr = c_lev.top(); 
            c_lev.pop(); 
  
            // Base case 
            if (curr == NULL) 
                continue; 
            prev->right = curr; 
            prev->left = NULL; 
            prev = curr; 
  
            // Pushing new elements 
            // in queue 
            if (!lev) 
                n_lev.push(curr->left); 
            n_lev.push(curr->right); 
            if (lev) 
                n_lev.push(curr->left); 
        } 
        lev = (!lev); 
        c_lev = n_lev; 
        while (n_lev.size()) 
            n_lev.pop(); 
    } 
  
    prev->left = NULL; 
    prev->right = NULL; 
} 
  
// Function to print flattened 
// binary tree 
void print(node* parent) 
{ 
    node* curr = parent; 
    while (curr != NULL) 
        cout << curr->data << " ", curr = curr->right; 
} 
  
// Driver code 
int main() 
{ 
    node* root = new node(1); 
    root->left = new node(5); 
    root->right = new node(2); 
    root->left->left = new node(6); 
    root->left->right = new node(4); 
    root->right->left = new node(9); 
    root->right->right = new node(3); 
  
    // Calling required functions 
    flatten(root); 
  
    print(root); 
  
    return 0; 
} 
