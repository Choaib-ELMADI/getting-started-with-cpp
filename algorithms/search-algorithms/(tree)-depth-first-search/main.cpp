#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int n) {
    Node *newNode = new Node();
    newNode->data = n;
    newNode->left = newNode->right = nullptr;

    return newNode;
}

void printTreePreOrder(Node *root) {
    if (root == nullptr) return;

    cout << root->data << " _ ";
    printTreePreOrder(root->left);
    printTreePreOrder(root->right);
}

void printTreeInOrder(Node *root) {
    if (root == nullptr) return;

    printTreeInOrder(root->left);
    cout << root->data << " _ ";
    printTreeInOrder(root->right);
}

void printTreePostOrder(Node *root) {
    if (root == nullptr) return;

    printTreePostOrder(root->left);
    printTreePostOrder(root->right);
    cout << root->data << " _ ";
}

int main() {
    Node *root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    cout << "Preorder algorithm:" << endl;
    printTreePreOrder(root);
    cout << endl << "Order algorithm:" << endl;
    printTreeInOrder(root);
    cout << endl << "Postorder algorithm:" << endl;
    printTreePostOrder(root);

    return 0;
}