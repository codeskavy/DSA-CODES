#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;  // Fixed, it should return 'node' not 'Node'.
}

int size(Node* node) {
    if (node == NULL)  // Fixed, changed "Node" to "node".
        return 0;
    else
        return (size(node->left) + 1 + size(node->right));
}

int main() {
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Size of the tree is " << size(root) << endl;  // Added endl.
    return 0;
}
