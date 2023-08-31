#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int);
void printTree(Node *);

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

    printTree(root);

    return 0;
}

Node *createNode(int n) {
    Node *newNode = new Node();
    newNode->data = n;
    newNode->left = newNode->right = nullptr;

    return newNode;
}

void printTree(Node *root) {
    if (root == nullptr) return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
        Node *curr = q.front();
        cout << curr->data << " - ";

        if (curr->left != nullptr) q.push(curr->left);
        if (curr->right != nullptr) q.push(curr->right);
        q.pop();
    }
}