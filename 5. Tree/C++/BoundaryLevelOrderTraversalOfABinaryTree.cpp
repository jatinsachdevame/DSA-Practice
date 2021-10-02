  
/*
 * Author : Udit khanna
 * Date   : October-2020 
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */
 
 // C++ program for printing a 
// Levels of Binary Tree in a 
// start end fashion 
  
#include <bits/stdc++.h> 
using namespace std; 
  
// A Tree node 
struct Node { 
    int key; 
    struct Node *left, *right; 
}; 
  
// Utility function to create a new node 
Node* newNode(int key) 
{ 
    Node* temp = new Node; 
    temp->key = key; 
    temp->left = temp->right = NULL; 
    return (temp); 
} 
  
// Utility function to print level in 
// start end fashion 
void printLevelUtil(struct Node* queue[], 
                    int index, int size) 
{ 
    while (index < size) { 
        cout << queue[index++]->key << " "
             << queue[size--]->key << " "; 
    } 
    if (index == size) { 
        cout << queue[index]->key << " "; 
    } 
  
    cout << endl; 
} 
  
// Utility function to print level in  start 
// end fashion in a given Binary tree 
void printLevel(struct Node* node, 
                struct Node* queue[], 
                int index, int size) 
{ 
  
    // Print root node value 
    // as a single value in a 
    // binary tree 
    cout << queue[index]->key << endl; 
  
    // Level order traversal of Tree 
    while (index < size) { 
        int curr_size = size; 
        while (index < curr_size) { 
            struct Node* temp = queue[index]; 
  
            if (temp->left != NULL) { 
                queue[size++] = temp->left; 
            } 
  
            if (temp->right != NULL) { 
                queue[size++] = temp->right; 
            } 
  
            index++; 
        } 
  
        // Print level in a desire fashion 
        printLevelUtil(queue, index, size - 1); 
    } 
} 
  
// Function to find total no of nodes 
int findSize(struct Node* node) 
{ 
  
    if (node == NULL) 
        return 0; 
  
    return 1 
           + findSize(node->left) 
           + findSize(node->right); 
} 
  
// Function to print level in start end 
// fashion in a given binary tree 
void printLevelInStartEndFashion( 
    struct Node* node) 
{ 
    int t_size = findSize(node); 
    struct Node* queue[t_size]; 
    queue[0] = node; 
    printLevel(node, queue, 0, 1); 
} 
  
// Driver Code 
int main() 
{ 
    /*     10  
           / \  
         13   13  
          /     \  
        14       15  
        / \     / \  
       21 22   22 21  
                  /  
                 8 */
  
    // Create Binary Tree as shown 
    Node* root = newNode(10); 
    root->left = newNode(13); 
    root->right = newNode(13); 
  
    root->right->left = newNode(14); 
    root->right->right = newNode(15); 
  
    root->right->left->left = newNode(21); 
    root->right->left->right = newNode(22); 
    root->right->right->left = newNode(22); 
    root->right->right->right = newNode(21); 
    root->right->right->right->left = newNode(8); 
  
    // Print Levels In Start End Fashion 
    printLevelInStartEndFashion(root); 
  
    return 0; 
} 
