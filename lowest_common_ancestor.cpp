#include <bits/stdc++.h>
using namespace std;
 
struct Node{
    struct Node* left, *right;
    int data;
};
 
struct Node* newNode(int key){
    struct Node* ptr = new Node;
    ptr->data = key;
    ptr->left = ptr->right = NULL;
    return ptr;
}
 
struct Node* insert(struct Node* root, int key){
    if (!root)
        root = newNode(key);
    else if (root->data > key)
        root->left = insert(root->left, key);
    else if (root->data < key)
        root->right = insert(root->right, key);
    return root;
}
 
Node* lca(Node* root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
 
    // If both n1 and n2 are smaller than root
    // LCA lies in left
    if (root->data > n1 && root->data > n2)
        return lca(root->left, n1, n2);
 
    // If both n1 and n2 are greater than root
    // LCA lies in right
    if (root->data < n1 && root->data < n2)
        return lca(root->right, n1, n2);
 
    return root;
}
 
int main()
{
    struct Node* root = NULL;
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    
    int x;
    cout<<"Enter the values of nodes: ";
    for(int i = 0; i < n; i++){
        cin>>x;
        if(i == 0)
            root = insert(root, x);
        else
            insert(root, x);
    }
 
    int a, b;
    cout<<"Node-1: ";
    cin>>a;
    
    cout<<"Node-2: ";
    cin>>b;
    
    cout<<"Lowest Common Ancestor: "<<lca(root, a, b)->data;
    
    return 0;
}