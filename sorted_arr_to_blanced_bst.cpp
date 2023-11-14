#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* left;
    Node* right;
};
 
Node* newNode(int data);
 
Node* sortedArrayToBST(vector<int>a, int start, int end){
    if (start > end)  // base case
        return NULL;
 
    // making the middle element the root
    int mid = (start + end)/2;
    Node *root = newNode(a[mid]);
 
    // Recursively creating the left subtree
    // and making it the left child of the root 
    root->left = sortedArrayToBST(a, start, mid - 1);
 
    // Recursively creating the right subtree
    // and making it the right child of the root
    root->right = sortedArrayToBST(a, mid + 1, end);
 
    return root;
}
 
Node* newNode(int data){
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return node;
}
 
void preOrder(Node* node)
{
    if (node == NULL)
        return;
        
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}
 
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    vector<int>a(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
        cin>>a[i];
        
    Node *root = sortedArrayToBST(a, 0, n-1);
    cout << "\nPreOrder Traversal of constructed BST: ";
    preOrder(root);
 
    return 0;
}