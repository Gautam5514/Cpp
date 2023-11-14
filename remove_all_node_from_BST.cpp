#include <iostream>
using namespace std;
 
class Node {
public:
    int data;
    Node *left, *right;
 
    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};
 
class BST {
public:
    Node *root;
 
    BST() {
        root = nullptr;
    }
 
    Node* insert(Node* root, int data) {
        if (root == nullptr) {
            root = new Node(data);
            return root;
        }
 
        if (data < root->data) {
            root->left = insert(root->left, data);
        } else if (data > root->data) {
            root->right = insert(root->right, data);
        }
 
        return root;
    }
 
    void insert(int data) {
        root = insert(root, data);
    }
 
    Node* removeLeafNodes(Node* root) {
        if (root == nullptr) {
            return nullptr;
        }
 
        if (root->left == nullptr && root->right == nullptr) {
            return nullptr;
        }
 
        root->left = removeLeafNodes(root->left);
        root->right = removeLeafNodes(root->right);
 
        return root;
    }
 
    void removeLeafNodes() {
        root = removeLeafNodes(root);
    }
 
    void preorderTraversal(Node* root) {
        if (root != nullptr) {
            cout << root->data << " ";
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
    }
 
    void preorderTraversal() {
        preorderTraversal(root);
    }
};
 
int main() {
    BST bst;
 
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
 
    cout << "\nEnter the node values:" << endl;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        bst.insert(data);
    }
 
    cout << "Preorder traversal of the BST before removing leaf nodes:" << endl;
    bst.preorderTraversal();
 
    bst.removeLeafNodes();
 
    cout << "\nPreorder traversal of the BST after removing leaf nodes:" << endl;
    bst.preorderTraversal();
 
    return 0;
}