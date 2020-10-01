/*
 * Author : Rohit Shakya
 * Date   : May-2020
 * Compiler : g++ 4.9.2
 * Flags    : -std=c++14
 * Time complexity : O(n)
 * Title :  Depth first traversal/ inorder, preorder and postorder
 */
/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

void inOrder(Node* root)
{
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Node* root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right); 
}

void postOrder(Node* root)
{
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    
}
