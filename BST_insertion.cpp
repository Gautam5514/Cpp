#include <iostream>
 
using namespace std;
 
class Node {
public:
    int data;
    Node* left;
    Node* right;
 
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};
 
class BST {
public:
    Node* root;
 
    BST() {
        root = NULL;
    }
 
    void insertBST(int value) {
        Node* newNode = new Node(value);
        if (root == NULL) {
            root = newNode;
            return;
        }
        Node* current = root;
        while (true) {
            if (value < current->data) {
                if (current->left == NULL) {
                    current->left = newNode;
                    return;
                }
                current = current->left;
            }
            else {
                if (current->right == NULL) {
                    current->right = newNode;
                    return;
                }
                current = current->right;
            }
        }
    }
 
    void inorderTraversal(Node* node) {
        if (node == NULL) {
            return;
        }
        
        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }
};

int main(){
    BST bst1;
    bst1.insertBST(3);
    bst1.insertBST(1);
    bst1.insertBST(4);
    bst1.insertBST(9);
    bst1.insertBST(7);
    
    
    bst1.inorderTraversal(bst1.root);
    return 0;
}
