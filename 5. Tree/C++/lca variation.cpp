#include<bits/stdc++.h>
using namespace std;
int main()
{
	isSubTree()
}

int isSubTree(tnode* root1, tnode* root2)
{
	 if (root1 == NULL && root2 == NULL)  
        return 0;  
  
    if (root1 == NULL || root2 == NULL)  
        return 1;  
    return (root1->data == root2->data &&  
            isSubTree(root1->left, root2->left) && isSubTree(root1->right, root2->right) ); 
}
