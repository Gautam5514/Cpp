#include <iostream>

class Node {
public:
    int data;
    Node* left, *right;

    Node(int item) {
        data = item;
        left = right = nullptr;
    }
};

class BST {
public:
    Node* root;

    // Constructor
    BST() {
        root = nullptr;
    }

    // This method finds the inorder predecessor and successor of the given key
    void findPreSuc(Node* root, int key) {
        if (root == nullptr)  // If the root is null, return
            return;

        Node* pred = nullptr, *succ = nullptr;

        while (root != nullptr) {
            if (root->data == key) {  // If the key is found, check for its predecessor and successor
                if (root->left != nullptr) {
                    pred = root->left;
                    while (pred->right != nullptr)
                        pred = pred->right;
                }
                if (root->right != nullptr) {
                    succ = root->right;
                    while (succ->left != nullptr)
                        succ = succ->left;
                }
                std::cout << "Predecessor is " << (pred != nullptr ? pred->data : -1) << std::endl;
                std::cout << "Successor is " << (succ != nullptr ? succ->data : -1) << std::endl;
                return;
            }
            else if (root->data > key) {  // If the key is smaller, move to the left subtree
                succ = root;
                root = root->left;
            }
            else {  // If the key is greater, move to the right subtree
                pred = root;
                root = root->right;
            }
        }

        std::cout << "Key not found in BST" << std::endl;
    }
};

// Main method to test the above functions
int main() {
    BST tree;
    tree.root = new Node(50);
    tree.root->left = new Node(30);
    tree.root->right = new Node(70);
    tree.root->left->left = new Node(20);
    tree.root->left->right = new Node(40);
    tree.root->right->left = new Node(60);
    tree.root->right->right = new Node(80);

    int key = 60;
    tree.findPreSuc(tree.root, key);

    return 0;
}
